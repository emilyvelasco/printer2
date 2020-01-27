#include <avr/pgmspace.h>

#include "compressed-art.h"

#include <avr/pgmspace.h>

#define R(x) pgm_read_byte_near(x)

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
 
  //printStartupMessage();
 
  resetPrinter();
 
  Serial.println("Delay for 5 sec");
  delay(500);
 
  Serial.println("Startup complete");
}


void uncompress(const char *data)
{
  const char *ptr = data;
  while(R(ptr) != 0){
    if (!((R(ptr) & 0x80))){
      send_char(R(ptr));
    } else {
      char c = R(ptr);
      int count = R((unsigned char*)++ptr);
      for (int i=0; i<count; i++){
        send_char(c & 0x7f);
      }
    }
    ptr++;
  }
}

void loop() {
while(digitalRead(14) == HIGH) {
  
   // wait
}
long rand_idx = random(n_images);
uncompress(compressed_images[rand_idx]);
                 
  }

void send_char(char c)
{
  //Serial.print(c);
  printByte(c);
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
