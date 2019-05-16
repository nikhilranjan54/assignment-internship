#include "Arduino.h"
#include "jklogic.c"
int A,B,C,D,E,F,G,H;

void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
}

void loop()

{
  
  for (int i=1;i<=8;i++)
 {
  A=0;
  B=0;
  C=0;
  D=0;
  if(i%8==0)
  A=!A;
  if(i%4==0)
  B=!B;
  if(i%2==0)
  C=!C;
  H=!H;
  
    D=jklogic(A,!A);
    E=jklogic(B,!B);
    F=jklogic(C,!C);
    G=jklogic(H,!H);
    
    digitalWrite(5,D);
    digitalWrite(6,E);
    digitalWrite(7,F);
    digitalWrite(8,G);
    delay(1000);

    
  }
}
