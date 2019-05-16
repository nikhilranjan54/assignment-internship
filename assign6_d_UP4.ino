#include "Arduino.h"
#include "dlogic.c"
int A,B,C,Z,E,F,G,H;

void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
}

void loop()

{
   A=0;
  B=0;
  C=0;
  Z=0;
  for (int i=1;i<=10;i++)
 {
 

  
    E=dlogic(A);
    F=dlogic(B);
    G=dlogic(C);
    H=dlogic(Z);
    
    digitalWrite(5,H);
    digitalWrite(6,G);
    digitalWrite(7,F);
    digitalWrite(8,E);
    delay(1000);

      if(i%8==0)
  A=!A;
  if(i%4==0)
  B=!B;
  if(i%2==0)
  C=!C;
  Z=!Z;
  }
}
