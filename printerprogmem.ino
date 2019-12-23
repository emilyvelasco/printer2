
const int startup_charsPerLine = 80;
const int startup_num_lines = 5;
PROGMEM const byte startup_message[startup_num_lines][startup_charsPerLine] = {
  "This is the startup message. It prints whenever",
  "the Arduino is reset.",
  "the Arduino is reset.",
  "the Arduino is reset.",
  "the Arduino is reset.",
  
};

const int charsPerLine = 80;   // this is the max # of chars per line
const int num_lines = 11;
PROGMEM const byte message[num_lines][charsPerLine] = {
  "    ",   // blank line
"|-----------|",
"| I         |",
"| AM A      |",
"| RABBIT    |",
"| WITH A    |",
"| SIGN      |",
"|-----------|",
"(\\__/) ||",
"(o^o) ||",
"/ 　 つ"
};

// parallel port pin# = arduino pin#
const int nStrobe = 2;
const int data_0 = 3;
const int data_1 = 4;
const int data_2 = 5;
const int data_3 = 6;
const int data_4 = 7;
const int data_5 = 8;
const int data_6 = 9;
const int data_7 = 10;
const int nAck = 11;
const int busy = 12;

const int strobeWait = 2;   // microseconds to strobe for


void setup() {
  Serial.begin(9600);

  pinMode(nStrobe, OUTPUT);      // is active LOW
  digitalWrite(nStrobe, HIGH);   // set HIGH
  pinMode(data_0, OUTPUT);
  pinMode(data_1, OUTPUT);
  pinMode(data_2, OUTPUT);
  pinMode(data_3, OUTPUT);
  pinMode(data_4, OUTPUT);
  pinMode(data_5, OUTPUT);
  pinMode(data_6, OUTPUT);
  pinMode(data_7, OUTPUT);

  pinMode(nAck, INPUT);     // is active LOW
  pinMode(busy, INPUT); 

  pinMode(13, OUTPUT);
  pinMode(14, INPUT);   // analog pin 0 on duemilanove and uno
  digitalWrite(14, HIGH); // enable pull-up
 
  delay(1000);
 
  resetPrinter();
 
  printStartupMessage();
 
  resetPrinter();
 
  Serial.println("Delay for 5 sec");
  delay(5000);
 
  Serial.println("Startup complete");
}

void loop() {
while(digitalRead(14) == HIGH) {
   // wait
}

  resetPrinter();

  printMessage();

  resetPrinter();
}

void printByte(byte inByte) {
  while(digitalRead(busy) == HIGH) {
    // wait for busy to go low
  }

  int b0 = bitRead(inByte, 0);
  int b1 = bitRead(inByte, 1);
  int b2 = bitRead(inByte, 2);
  int b3 = bitRead(inByte, 3);
  int b4 = bitRead(inByte, 4);
  int b5 = bitRead(inByte, 5);
  int b6 = bitRead(inByte, 6);
  int b7 = bitRead(inByte, 7);

  digitalWrite(data_0, b0);        // set data bit pins
  digitalWrite(data_1, b1);
  digitalWrite(data_2, b2);
  digitalWrite(data_3, b3);
  digitalWrite(data_4, b4);
  digitalWrite(data_5, b5);
  digitalWrite(data_6, b6);
  digitalWrite(data_7, b7);

  digitalWrite(nStrobe, LOW);       // strobe nStrobe to input data bits
  delayMicroseconds(strobeWait);
  digitalWrite(nStrobe, HIGH);

  while(digitalRead(busy) == HIGH) {
    // wait for busy line to go low
  }
}

void resetPrinter() {
  Serial.println("Reseting printer...");
  printByte(27); // reset printer
  printByte('E');
  Serial.println("Printer Reset");
}

void printMessage() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine; cursorPosition++) {
    PROGMEM const byte character = message[line][cursorPosition];
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printStartupMessage() {
  Serial.println("Print start-up mssage");
  digitalWrite(13, HIGH);
  for(int line = 0; line < startup_num_lines; line++) { 
    for(int cursorPosition = 0; cursorPosition < startup_charsPerLine; cursorPosition++) {
    PROGMEM const byte character = startup_message[line][cursorPosition];
      printByte(character);
      //      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
    Serial.print("Line ");
    Serial.print(line);
    Serial.println(" printed.");
  }
  Serial.println("Startup message printed");
  digitalWrite(13,LOW);
}
