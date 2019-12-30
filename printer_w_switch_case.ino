#include <avr/pgmspace.h>



const int startup_charsPerLine = 80;
const int startup_num_lines = 5;
const PROGMEM byte startup_message[startup_num_lines][startup_charsPerLine] = {
  "This is the startup message. It prints whenever",
  "the Arduino is reset.",
  "the Arduino is reset.",
  "the Arduino is reset.",
  "the Arduino is reset.",
  
};

const int charsPerLine0 = 80;   // this is the max # of chars per line
const int num_lines0 = 2;
const PROGMEM  byte message0[num_lines0][charsPerLine0] = {
  "    ",   // blank line
  "this is message 0",
};

const int charsPerLine1 = 80;   // this is the max # of chars per line
const int num_lines1 = 2;
const PROGMEM  byte message1[num_lines1][charsPerLine1] = {
  "    ",   // blank line
  "this is message 1",
};

const int charsPerLine2 = 80;   // this is the max # of chars per line
const int num_lines2 = 2;
const PROGMEM  byte message2[num_lines2][charsPerLine2] = {
  "    ",   // blank line
  "this is message 2",
};

const int charsPerLine3 = 80;   // this is the max # of chars per line
const int num_lines3 = 2;
const PROGMEM  byte message3[num_lines3][charsPerLine3] = {
  "    ",   // blank line
  "this is message 3",
};


const int charsPerLine4 = 80;   // this is the max # of chars per line
const int num_lines4 = 2;
const PROGMEM  byte message4[num_lines4][charsPerLine4] = {
  "    ",   // blank line
  "this is message 4",
};

const int charsPerLine5 = 80;   // this is the max # of chars per line
const int num_lines5 = 2;
const PROGMEM  byte message5[num_lines5][charsPerLine5] = {
  "    ",   // blank line
  "this is message 5",
};

const int charsPerLine6 = 80;   // this is the max # of chars per line
const int num_lines6 = 2;
const PROGMEM  byte message6[num_lines6][charsPerLine6] = {
  "    ",   // blank line
  "this is message 6",
};

const int charsPerLine7 = 80;   // this is the max # of chars per line
const int num_lines7 = 2;
const PROGMEM  byte message7[num_lines7][charsPerLine7] = {
  "    ",   // blank line
  "this is message 7",
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

int randPrint = random(7);
  switch(randPrint)
  {
    case 0 :  resetPrinter();
              printMessage0();
              resetPrinter();
              break;
    case 1 :  resetPrinter();
              printMessage1();
              resetPrinter(); 
              break;
    case 2 :  resetPrinter();
              printMessage2();
              resetPrinter();
              break; 
    case 3 :  resetPrinter();
              printMessage3();
              resetPrinter();
              break;   
    case 4 :  resetPrinter();
              printMessage4();
              resetPrinter();
              break;  
    case 5 :  resetPrinter();
              printMessage5();
              resetPrinter();
              break;   
    case 6 :  resetPrinter();
              printMessage6();
              resetPrinter();
              break;  
    default:  resetPrinter();
              printMessage7();
              resetPrinter();
              break;               
  }
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

void printMessage0() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines0; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine0; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message0[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage1() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines1; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine1; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message1[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage2() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines2; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine2; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message2[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage3() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines3; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine3; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message3[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage4() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines4; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine4; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message4[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage5() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines5; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine5; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message5[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage6() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines6; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine6; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message6[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage7() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines7; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine7; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message7[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printStartupMessage() {
  //Serial.println("Print start-up mssage");
  digitalWrite(13, HIGH);
  for(int line = 0; line < startup_num_lines; line++) { 
    for(int cursorPosition = 0; cursorPosition < startup_charsPerLine; cursorPosition++) {
    byte character = pgm_read_byte_near(&(startup_message[line][cursorPosition]));
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
