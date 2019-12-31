#include <avr/pgmspace.h>



const int startup_charsPerLine = 80;
const int startup_num_lines = 2;
const PROGMEM byte startup_message[startup_num_lines][startup_charsPerLine] = {
  "                        Welcome to PrintWizard 2000!",
  "                       Press 'PRINT' to receive art!",
  
};

const int charsPerLine0 = 80;   // this is the max # of chars per line
const int num_lines0 = 63;
const PROGMEM  byte message0[num_lines0][charsPerLine0] = {
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"                                  uuuuuuu",
"                              uu$$$$$$$$$$$uu",
"                           uu$$$$$$$$$$$$$$$$$uu",
"                          u$$$$$$$$$$$$$$$$$$$$$u",
"                         u$$$$$$$$$$$$$$$$$$$$$$$u",
"                        u$$$$$$$$$$$$$$$$$$$$$$$$$u",
"                        u$$$$$$$$$$$$$$$$$$$$$$$$$u",
"                        u$$$$$$\"   \"$$$\"   \"$$$$$$u",
"                        \"$$$$\"      u$u       $$$$\"",
"                         $$$u       u$u       u$$$",
"                         $$$u      u$$$u      u$$$",
"                          \"$$$$uu$$$   $$$uu$$$$\"",
"                           \"$$$$$$$\"   \"$$$$$$$\"",
"                             u$$$$$$$u$$$$$$$u",
"                             u$\"$\"$\"$\"$\"$\"$u",
"                   uuu        $$u$ $ $ $ $u$$       uuu",
"                  u$$$$        $$$$$u$u$u$$$       u$$$$",
"                   $$$$$uu      \"$$$$$$$$$\"     uu$$$$$$",
"                 u$$$$$$$$$$$uu    \"\"\"\"\"    uuuu$$$$$$$$$$",
"                 $$$$\"\"\"$$$$$$$$$$uuu   uu$$$$$$$$$\"\"\"$$$\"",
"                  \"\"\"      \"\"$$$$$$$$$$$uu \"\"$\"\"\"",
"                            uuuu \"\"$$$$$$$$$$uuu",
"                   u$$$uuu$$$$$$$$$uu \"\"$$$$$$$$$$$uuu$$$",
"                   $$$$$$$$$$\"\"\"\"           \"\"$$$$$$$$$$$\"",
"                    \"$$$$$\"                      \"\"$$$$\"\"",
"                      $$$\"                         $$$$\"",
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
};

const int charsPerLine1 = 80;   // this is the max # of chars per line
const int num_lines1 = 63;
const PROGMEM  byte message1[num_lines1][charsPerLine1] = {
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"     ================================",
"    /\\                              \\",
"   /++\\    ==========================\\",
"   \\+++\\   \\ ************************/",
"    \\+++\\   \\=================== ***/",
"     \\+++\\   \\             /+++/***/",
"      \\+++\\   \\           /+++/***/",
"       \\+++\\   \\         /+++/***/",
"        \\+++\\   \\       /+++/***/",
"         \\+++\\   \\     /+++/***/",
"          \\+++\\   \\   /+++/***/",
"           \\+++\\   \\ /+++/***/",
"            \\+++\\   /+++/***/",
"             \\+++\\ /+++/***/",
"              \\+++++++/***/",
"               \\+++++/***/",
"                \\+++/***/",
"                 \\+/===/",
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
};

const int charsPerLine2 = 80;   // this is the max # of chars per line
const int num_lines2 = 63;
const PROGMEM  byte message2[num_lines2][charsPerLine2] = {
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"                     .sssssssss.",
"                 .sssssssssssssssssss",
"               sssssssssssssssssssssssss",
"             ssssssssssssssssssssssssssss",
"             @@sssssssssssssssssssssss@ss",
"             |s@@@@sssssssssssssss@@@@s|s",
"      =======|sssss@@@@@sssss@@@@@sssss|s",
"    /         sssssssss@sssss@sssssssss|s",
"   /  .------+.ssssssss@sssss@ssssssss.|",
"  /  /       |...sssssss@sss@sssssss...|",
" |  |        |.......sss@sss@ssss......|",
" |  |        |..........s@ss@sss.......|",
" |  |        |...........@ss@..........|",
"  \\  \\       |............ss@..........|",
"   \\  '------+...........ss@...........|",
"     \\=========.........................|",
"             |.........................|",
"            /...........................\\",
"             |.............................|",
"               |.......................|",
"                  |...............|",
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
};

const int charsPerLine3 = 80;   // this is the max # of chars per line
const int num_lines3 = 63;
const PROGMEM  byte message3[num_lines3][charsPerLine3] = {
"    ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"                          iWs                                 ,W[",
"                          W@@W.                              g@@[",
"                         i@@@@@s                           g@@@@W",
"                         @@@@@@@W.                       ,W@@@@@@",
"                        ]@@@@@@@@@W.   ,_______.       ,m@@@@@@@@i",
"                       ,@@@@@@@@@@@@W@@@@@@@@@@@@@@mm_g@@@@@@@@@@[",
"                       d@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"                      i@@@@@@@A*~~~~~VM@@@@@@@@@@Af~~~~V*@@@@@@@@@i",
"                      @@@@@A~          'M@@@@@@A`         'V@@@@@@b",
"                     d@@@*`              Y@@@@f              V@@@@@.",
"                    i@@A`                 M@@P                 V@@@b",
"                   ,@@A                   '@@                   !@@@.",
"                   @|P                     [                     '@@W",
"                  d@@            ,         ]!        ,            ]@@b",
"                 g@@[          ,W@@s       ]       ,W@@s           @@@i",
"                i@@@[          W@@@@i      ]       W@@@@i          @@@@i",
"               i@@@@[          @@@@@[      ]       @@@@@[          @@@@@i",
"              g@@@@@[          @@@@@!      @[      @@@@@[          @@@@@@i",
"             d@@@@@@@          !@@@P      iAW      !@@@A          ]@@@@@@@i",
"            W@@@@@@@@b          '~~      ,Z Yi      '~~          ,@@@@@@@@@",
"            '*@@@@@@@@s                  Z`  Y.                 ,W@@@@@@@@A",
"              'M@@@*f**W.              ,Z     Vs               ,W*~~~M@@@f",
"                'M@    'Vs.          ,z~       'N_           ,Z~     d@P",
"               M@@@       ~\\-_   __z/` ,gmW@@mm_ '+e_.   __=/`      ,@@@@",
"                'VMW           ~~~    g@@@@@@@@@W     ~~~          ,WAf",
"                   ~N.                @@@@@@@@@@@!                ,Z`",
"                     V.               !M@@@@@@@@f                gf-",
"                      'N.               '~@@@f~                ,Z`",
"                        Vc.                                  _Zf",
"                          ~e_                             ,gY~",
"                            'V=_          -@@D         ,gY~ '",
"                                ~\\=__.           ,__z=~`",
"                                       '~~~*==Y*f~~~\",     ",
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
};


const int charsPerLine4 = 80;   // this is the max # of chars per line
const int num_lines4 = 63;
const PROGMEM  byte message4[num_lines4][charsPerLine4] = {
  "    ",   // blank line
  "      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"                         8888  8888888",
"                         8888  8888888",
"                  888888888888888888888888",
"               8888:::8888888888888888888888888",
"             8888::::::8888888888888888888888888888",
"            88::::::::888:::8888888888888888888888888",
"          88888888::::8:::::::::::88888888888888888888",
"        888 8::888888::::::::::::::::::88888888888   888",
"           88::::88888888::::m::::::::::88888888888    8",
"         888888888888888888:M:::::::::::8888888888888",
"        88888888888888888888::::::::::::M88888888888888",
"        8888888888888888888888:::::::::M8888888888888888",
"         8888888888888888888888:::::::M888888888888888888",
"        8888888888888888::88888::::::M88888888888888888888",
"      88888888888888888:::88888:::::M888888888888888   8888",
"     88888888888888888:::88888::::M::;o*M*o;888888888    88",
"    88888888888888888:::8888:::::M:::::::::::88888888    8",
"   88888888888888888::::88::::::M:;:::::::::::888888888",
"  8888888888888888888:::8::::::M::aAa::::::::M8888888888       8",
"  88   8888888888::88::::8::::M:::::::::::::888888888888888 8888",
" 88  88888888888:::8:::::::::M::::::::::;::88:88888888888888888",
" 8  8888888888888:::::::::::M::\"@@@@@@\"::::8w8888888888888888",
"  88888888888:888::::::::::M:::::\"@a@\":::::M8i8888888888888888",
" 8888888888::::88:::::::::M88:::::::::::::M88z88888888888888888",
"8888888888:::::8:::::::::M88888:::::::::MM888!888888888888888888",
"888888888:::::8:::::::::M8888888MAmmmAMVMM888*88888888   88888888",
"888888 M:::::::::::::::M888888888:::::::MM88888888888888   8888888",
"8888   M::::::::::::::M88888888888::::::MM888888888888888    88888",
" 888   M:::::::::::::M8888888888888M:::::mM888888888888888    8888",
"  888  M::::::::::::M8888:888888888888::::m::Mm88888 888888   8888",
"   88  M::::::::::::8888:88888888888888888::::::Mm8   88888   888",
"   88  M::::::::::8888M::88888::888888888888:::::::Mm88888    88",
"   8   MM::::::::8888M:::8888:::::888888888888::::::::Mm8     4",
"       8M:::::::8888M:::::888:::::::88:::8888888::::::::Mm    2",
"      88MM:::::8888M:::::::88::::::::8:::::888888:::M:::::M",
"     8888M:::::888MM::::::::8:::::::::::M::::8888::::M::::M",
"    88888M:::::88:M::::::::::8:::::::::::M:::8888::::::M::M",
"   88 888MM:::888:M:::::::::::::::::::::::M:8888:::::::::M:",
"   8 88888M:::88::M:::::::::::::::::::::::MM:88::::::::::::M",
"  ",
" /$$        /$$$$$$  /$$             /$$   /$$  /$$$$$$ ",
"| $$       /$$__  $$| $$            | $$$ | $$ /$$__  $$",
"| $$      | $$  \\ $$| $$            | $$$$| $$| $$  \\ $$",
"| $$      | $$  | $$| $$            | $$ $$ $$| $$  | $$",
"| $$      | $$  | $$| $$            | $$  $$$$| $$  | $$",
"| $$      | $$  | $$| $$            | $$\\  $$$| $$  | $$",
"| $$$$$$$$|  $$$$$$/| $$$$$$$$      | $$ \\  $$|  $$$$$$/",
"|________/ \\______/ |________/      |__/  \\__/ \\______/", 
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
};

const int charsPerLine5 = 80;   // this is the max # of chars per line
const int num_lines5 = 63;
const PROGMEM  byte message5[num_lines5][charsPerLine5] = {
"    ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"                                                                            ",
"                                                                            ", 
"                     xxxxxxxxxx                                             ",
"               MWMWMWWMWMWMWMWMWMWMWMWMW                                    ",
"           IIIIMWMWMWMWMWMWMWMWMWMWMWMWMWMttii                              ",
"     IIYVVXMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWxx                         ",
"    IWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMx                  ",
"IIWMWMWMWMWMWMWMWMWBYMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMx               ",
" ''MWMWMWMWMWM''''''''           '''''MWMWMWMWMWMWMWMWMWMWMWMWMWti          ",
"    ''                                     ''''MWMWMWMWMWMWMWMWMWMWMWMWMti= ",
"                                   xxxxx         '  '''YWMWMWMWMWMWMWMWMWMW+",
"                           XXXXXXXXXXXXXXXXXXXXx             'YWMWMWMWMWMWMW",
"                        XXXXXXXXWWWWWWWWWWWWWWWWXXXX               ''''''   ",
"                     XXXXXWWW'   W88N88@888888WWWWWXX                       ",
"                  XXXXXXWWW'    M88N88GGGGGG888*8M 'WMBX                    ",
"              XXXXXXXXWWW'     M88888WWRWW   8oo88M   WWMX                  ",
"        'XXXXXXXXXXXXWW'       WN8888WWWW     @@@8M    BMBRX                ",
"       XXXXXXXX=MMWW'          W8N888WWWWW   88888W      XRBRXX             ",
"        ''XXXXXMM               W8@889WWWWWM8@8N8W           RRXx           ",
"        '''  MMM:::              W888N89999888@8W              'RXV         ",
"        '''''      MMMm            WW888N88888WW          mmMMMMMRXx        ",
"                    ''MMmm            WWWWWWW         ,miMM'''    ''`       ",
"                         ''MMMMmm              _,mMMMM'''                   ",
"                               ''MMMMMMMMMMMMM'''                           ",
"                                                                            ",
"                                                                            ",
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
};

const int charsPerLine6 = 80;   // this is the max # of chars per line
const int num_lines6 = 63;
const PROGMEM  byte message6[num_lines6][charsPerLine6] = {
  "    ",   // blank line
  "      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"                          .,aad88888888888baa,.",
"                     ,ad8888888888888888888888888ba,.",
"                 ,ad888888888888888888888888888888888ba,",
"              ,ad888888888P\"\"'            \"\"\"Y88888888888ba.",
"            ,d88888888P\"\"                       \"\"Y888888888ba",
"          a888888888\"                               \"\"Y88888888b,",
"        ,888888888b,                                   \"\"Y8888888b,",
"       d888888888888b,                                    \"Y8888888b,",
"     ,8888888' \"888888b,                                    \"Y8888888b",
"    ,888888\"     \"Y88888b,                                    \"Y888888b",
"   ,888888'        \"Y88888b,                                    \"888888b",
"  ,888888'     a,  8a\"Y88888b,                                   `888888a",
" ,888888'      `8, `8) \"Y88888b,                  ,adPPRg,        `888888,",
" 888888'        8)  ]8   \"Y88888b,            ,ad888888888b        Y88888b",
"d88888P        ,8' ,8'     \"Y88888b,      ,gPPR888888888888        `888888,",
"888888'       ,8' ,8'        \"Y88888b,,ad8\"\"   `Y888888888P         )88888)",
"888888        8)  8)           \"Y888888\"        (8888888\"\"          (88888)",
"888888        8,  8,          ,ad8Y88888b,      d888\"\"              d88888)",
"888888        `8, `8,     ,ad8\"\"   \"Y88888b,,ad8\"\"                  888888",
"888888         `8, `\" ,ad8\"\"         \"Y88888b\"                     ,888888",
"Y88888,           ,gPPR8b           ,ad8Y88888b,                   d888888",
"`88888b          dP:::::Yb      ,ad8\"\"   \"Y88888b,                ,888888P",
" 888888,         8):::::(8  ,ad8\"\"         \"Y88888b,              d888888'",
" `888888,        Yb:;;;:d888\"\"               \"Y88888b,           d888888P",
"  Y888888,        \"8ggg8P\"                     \"Y88888b,       ,d888888P",
"   Y88888b,                                      \"Y88888b,    ,8888888\"",
"    Y88888b,                                       \"Y88888b, d8888888\"",
"     Y888888,                                        \"Y888888888888P'",
"      \"888888b,                                        \"8888888888\"",
"        Y888888b,                                     ,888888888\"",
"          Y8888888ba,                              ,a888888888\"",
"            \"Y88888888ba,._                   .,ad888888888P\"",
"               \"Y88888888888bbaa,,_____,,aadd88888888888\"\"",
"                   \"Y8888888888888888888888888888888\"\"", 
"                       \"\"Y888888888888888888888P\"\"",     
"                              \"\"\"\"\"\"\"\"\"\"\"\"\"\"",
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
"      ",   // blank line
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
  randomSeed(analogRead(0));
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
              Serial.println("0");
              resetPrinter();
              break;
    case 1 :  resetPrinter();
              printMessage1();
              Serial.println("1");
              resetPrinter(); 
              break;
    case 2 :  resetPrinter();
              printMessage2();
              Serial.println("2");
              resetPrinter();
              break; 
    case 3 :  resetPrinter();
              printMessage3();
              Serial.println("3");
              resetPrinter();
              break;   
    case 4 :  resetPrinter();
              printMessage4();
              Serial.println("4");
              resetPrinter();
              break;  
    case 5 :  resetPrinter();
              printMessage5();
              Serial.println("5");
              resetPrinter();
              break;   
    case 6 :  resetPrinter();
              printMessage6();
              Serial.println("6");
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
