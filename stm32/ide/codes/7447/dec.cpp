// Code by GVV Sharma
// Author-Shyam Anand
// December 24, 2024
// released under GNU GPL

#include<Arduino.h>

// Declaring all variables as integers

int Z=0,Y=1,X=1,W=1;
int D,C,B,A;

//Code released under GNU GPL.  Free to use for anything.
void disp_7447(int D, int C, int B, int A)
{
  digitalWrite(PB3, A); //LSB
  digitalWrite(PB4, B); 
  digitalWrite(PB5, C); 
  digitalWrite(PB6, D); //MSB

}
// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(PB3, OUTPUT);  
    pinMode(PB4, OUTPUT);
    pinMode(PB5, OUTPUT);
    pinMode(PB6, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 
  A = (!W);
  B = (!W&&!X&&Y)||(W&&X) || (!W&&Z);
  C = (!W&&Z) || (X&&Y) || (W&&Y);
  D = (!W&&!X&&!Y&&!Z)||(W&&Z); 

  disp_7447(D,C,B,A);
}
//&& is the AND operation
// || is the OR operation
// ! is the NOT operation
