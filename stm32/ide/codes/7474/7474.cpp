// Code by GVV Sharma
// Author-Shyam Anand
// December 24, 2024
// released under GNU GPL

#include <Arduino.h>

int D,C,B,A;

void disp_7447(int D,int C,int B, int A)
{
  digitalWrite(PA0, A); //LSB
  digitalWrite(PA1, B); 
  digitalWrite(PA2, C); 
  digitalWrite(PA3, D); //MSB
}

void setup() {
 
pinMode(PA0, OUTPUT);  
pinMode(PA1, OUTPUT);
pinMode(PA2, OUTPUT);
pinMode(PA3, OUTPUT);
pinMode(PB6, INPUT);
pinMode(PB7, INPUT);
pinMode(PB8, INPUT);
pinMode(PB9, INPUT);
pinMode(PC13, OUTPUT);

}

void loop() {
	
	digitalWrite(PC13, HIGH);
        delay(100);

	disp_7447(0,0,0,0);

	digitalWrite(PC13, LOW);
        delay(100);
}

