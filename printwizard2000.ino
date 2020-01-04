#include <avr/pgmspace.h>



const int startup_charsPerLine = 80;
const int startup_num_lines = 2;
const PROGMEM byte startup_message[startup_num_lines][startup_charsPerLine] = {
  "    ",

  
};

const int charsPerLine0 = 80;   // this is the max # of chars per line
const int num_lines0 = 29;  // this is the number of lines in the array
const PROGMEM  byte message0[num_lines0][charsPerLine0] = {
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
};

const int charsPerLine1 = 80;   // this is the max # of chars per line
const int num_lines1 = 25;
const PROGMEM  byte message1[num_lines1][charsPerLine1] = {
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
};

const int charsPerLine2 = 80;   // this is the max # of chars per line
const int num_lines2 = 24;
const PROGMEM  byte message2[num_lines2][charsPerLine2] = {
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
};

const int charsPerLine3 = 80;   // this is the max # of chars per line
const int num_lines3 = 35;
const PROGMEM  byte message3[num_lines3][charsPerLine3] = {
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
};


const int charsPerLine4 = 80;   // this is the max # of chars per line
const int num_lines4 = 41;
const PROGMEM  byte message4[num_lines4][charsPerLine4] = {
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
};

const int charsPerLine5 = 80;   // this is the max # of chars per line
const int num_lines5 = 24;
const PROGMEM  byte message5[num_lines5][charsPerLine5] = {
"      ",   // blank line
"      ",   // blank line                                                                        ", 
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
};

const int charsPerLine6 = 80;   // this is the max # of chars per line
const int num_lines6 = 38;
const PROGMEM  byte message6[num_lines6][charsPerLine6] = {
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
};

const int charsPerLine7 = 80;   // this is the max # of chars per line
const int num_lines7 = 51;
const PROGMEM  byte message7[num_lines7][charsPerLine7] = {
"      ",   // blank line
"      ",   // blank line
"                                 ,d8b,",
"                         _,,aadd8888888bbaa,,_",
"                    _,ad88P\"\"\"8,  I8I  ,8\"\"\"Y88ba,_",
"                 ,ad88P\" `Ya  `8, `8' ,8'  aP' \"Y88ba,",
"               ,d8\"' \"Yb   \"b, `b  8  d' ,d\"   dP\" `\"8b,",
"              dP\"Yb,  `Yb,  `8, 8  8  8 ,8'  ,dP'  ,dP\"Yb",
"           ,ad8b, `Yb,  \"Ya  `b Y, 8 ,P d'  aP\"  ,dP' ,d8ba,",
"          dP\" `Y8b, `Yb, `Yb, Y,`8 8 8',P ,dP' ,dP' ,d8P' \"Yb",
"         ,88888888Yb, `Yb,`Yb,`8 8 8 8 8',dP',dP' ,dY88888888,",
"         dP     `Yb`Yb, Yb,`8b 8 8 8 8 8 d8',dP ,dP'dP'     Yb",
"        ,8888888888b \"8, Yba888888888888888adP ,8\" d8888888888,",
"        dP        `Yb,`Y8P\"\"'             `\"\"Y8P',dP'        Yb",
"       ,88888888888P\"Y8P'_.---.._     _..---._`Y8P\"Y88888888888,",
"       dP         d'  8 '  ____  `. .'  ____  ` 8  `b         Yb",
"      ,888888888888   8   <(@@)>  | |  <(@@)>   8   888888888888,",
"      dP          8   8    `\"\"\"         \"\"\"'    8   8          Yb",
"     ,8888888888888,  8          ,   ,          8  ,8888888888888,",
"     dP           `b  8,        (.-_-.)        ,8  d'           Yb",
"    ,88888888888888Yaa8b      .'       `.      d8aaP88888888888888,",
"    dP               \"\"8b     _,gd888bg,_     d8\"\"               Yb",
"   ,888888888888888888888b,    \"\"Y888P\"\"    ,d888888888888888888888,",
"   dP                   \"8\"b,             ,d\"8\"                   Yb",
"  ,888888888888888888888888,\"Ya,_,ggg,_,aP\",888888888888888888888888,",
"  dP                      \"8,  \"8\"\\x/\"8\"  ,8\"                      Yb",
" ,88888888888888888888888888b   8\\x//8   d88888888888888888888888888,",
" 8888bgg,_                  8   8\\x//8   8                  _,ggd8888",
"  `\"Yb, \"\"8888888888888888888   Y\\\\x//P   8888888888888888888\"\" ,dP\"'",
"    _d8bg,_\"8,              8   `b\\x/d'   8              ,8\"_,gd8b_",
"  ,iP\"   \"Yb,8888888888888888    8\\x/8    8888888888888888,dP\"  `\"Yi,",
" ,P\"    __,888              8    8\\x/8    8              888,__    \"Y,",
",8baaad8P\"\":Y8888888888888888 aaa8\\x/8aaa 8888888888888888P:\"\"Y8baaad8,",
"dP]\"':::::::::8              8 8::8\\x/8::8 8              8:::::::::`\"Yb",
"8::::::::::::8888888888888888 8::88888::8 8888888888888888::::::::::::8",
"8::::::::::::8,             8 8:::::::::8 8             ,8::::::::::::8",
"8::::::::::::8888888888888888 8:::::::::8 8888888888888888::::::::::::8",
"8::::::::::::Ya             8 8:::::::::8 8             aP::::::::::::8",
"8:::::::::::::888888888888888 8:::::::::8 888888888888888:::::::::::::8",
"8:::::::::::::Ya            8 8:::::::::8 8            aP:::::::::::::8",
"Ya:::::::::::::88888888888888 8:::::::::8 88888888888888:::::::::::::aP",
"`8;:::::::::::::Ya,         8 8:::::::::8 8         ,aP:::::::::::::;8'",
" Ya:::::::::::::::\"Y888888888 8:::::::::8 888888888P\":::::::::::::::aP",
" `8;::::::::::::::::::::\"\"\"\"Y8888888888888P\"\"\"\"::::::::::::::::::::;8'",
"  Ya:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::aP",
"   \"b;:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::;d\"",
"    `Ya;:::::::::::::::::::::::::::::::::::::::::::::::::::::::;aP'",
"      `Ya;:::::::::::::::::::::::::::::::::::::::::::::::::::;aP'",
"         \"Ya;:::::::::::::::::::::::::::::::::::::::::::::;aP\"",
"            \"Yba;;;:::::::::::::::::::::::::::::::::;;;adP\"",
"                `\"\"\"\"\"\"\"Y888888888888888888888P\"\"\"\"\"\"\"'",
};

const int charsPerLine8 = 80;   // this is the max # of chars per line
const int num_lines8 = 26;
const PROGMEM  byte message8[num_lines8][charsPerLine8] = {
"      ",   // blank line
"      ",   // blank line
"                .,aadd\"'    `\"bbaa,.",
"            ,ad8888P'          `Y8888ba,",
"         ,a88888888              88888888a,",
"       a88888888888              88888888888a",
"     a8888888888888b,          ,d8888888888888a",
"    d8888888888888888b,_    _,d8888888888888888b",
"   d88888888888888888888888888888888888888888888b",
"  d8888888888888888888888888888888888888888888888b",
" I888888888888888888888888888888888888888888888888I",
",88888888888888888888888888888888888888888888888888,",
"I8888888888888888PY8888888PY88888888888888888888888I",
"8888888888888888\"  \"88888\"  \"88888888888888888888888",
"8::::::::::::::'    `:::'    `:::::::::::::::::::::8",
"Ib:::::::::::\"        \"        `::::::' `:::::::::dI",
"`8888888888P            Y88888888888P     Y88888888'",
" Ib:::::::'              `:::::::::'       `:::::dI",
"  Yb::::\"                  \":::::\"           \"::dP",
"   Y88P                      Y8P               `P",
"    Y'                        \"                 ",
"                                `:::::::::::;8\"",
"       \"888888888888888888888888888888888888\"",
"         `\"8;::::::::::::::::::::::::::;8\"'",
"            `\"Ya;::::::::::::::::::;aP\"'",
"                ``\"\"YYbbaaaaddPP\"\"''",
};


const int charsPerLine9 = 80;   // this is the max # of chars per line
const int num_lines9 = 32;
const PROGMEM  byte message9[num_lines9][charsPerLine9] = {
"      ",   // blank line
"      ",   // blank line
"                       .,,uod8B8bou,,.",
"              ..,uod8BBBBBBBBBBBBBBBBRPFT?l!i:.",
"         ,=m8BBBBBBBBBBBBBBBRPFT?!||||||||||||||",
"         !...:!TVBBBRPFT||||||||||!!^^\"\"'   ||||",
"         !.......:!?|||||!!^^\"\"'            ||||",
"         !.........||||                     ||||",
"         !.........||||  ##                 ||||",
"         !.........||||                     ||||",
"         !.........||||                     ||||",
"         !.........||||                     ||||",
"         !.........||||                     ||||",
"         `.........||||                    ,||||",
"          .;.......||||               _.-!!|||||",
"   .,uodWBBBBb.....||||       _.-!!|||||||||!:'",
"!YBBBBBBBBBBBBBBb..!|||:..-!!|||||||!iof68BBBBBb....",
"!..YBBBBBBBBBBBBBBb!!||||||||!iof68BBBBBBRPFT?!::   `.",
"!....YBBBBBBBBBBBBBBbaaitf68BBBBBBRPFT?!:::::::::     `.",
"!......YBBBBBBBBBBBBBBBBBBBRPFT?!::::::;:!^\"`;:::       `.",
"!........YBBBBBBBBBBRPFT?!::::::::::^''...::::::;         iBBbo.",
"`..........YBRPFT?!::::::::::::::::::::::::;iof68bo.      WBBBBbo.",
"  `..........:::::::::::::::::::::::;iof688888888888b.     `YBBBP^'",
"    `........::::::::::::::::;iof688888888888888888888b.     `",
"      `......:::::::::;iof688888888888888888888888888888b.",
"        `....:::;iof688888888888888888888888888888888899fT!",
"          `..::!8888888888888888888888888888888899fT|!^\"'",
"            `' !!988888888888888888888888899fT|!^\"'",
"                `!!8888888888888888899fT|!^\"'",
"                  `!988888888899fT|!^\"'",
"                    `!9899fT|!^\"'",
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
  randomSeed(analogRead(1));
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

int randPrint = random(10); //this randomizes which piece of art prints when the button (on pin 14) is pressed 
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
    case 7 :  resetPrinter();
              printMessage7();
              Serial.println("7");
              resetPrinter();
              break;   
    case 8 :  resetPrinter();
              printMessage8();
              Serial.println("8");
              resetPrinter();
              break;      
    case 9 :  resetPrinter();
              printMessage9();
              Serial.println("9");
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

void printMessage8() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines8; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine8; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message8[line][cursorPosition]));
      printByte(character);
      delay(1);
    }
    printByte(10); // new line
    printByte(13); // carriage return
  }
  digitalWrite(13,LOW);
}

void printMessage9() {
  digitalWrite(13, HIGH);
  for(int line = 0; line < num_lines9; line++) { 
    for(int cursorPosition = 0; cursorPosition < charsPerLine9; cursorPosition++) {
    byte character = pgm_read_byte_near(&(message9[line][cursorPosition]));
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
