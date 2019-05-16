#include "Arduino.h"
#include "jklogic.c"
int A,B,C,D,E,F;

void setup()
{
  digitalWrite(7,OUTPUT);
  digitalWrite(6,OUTPUT);
  digitalWrite(5,OUTPUT);
  Serial.begin(9600);
  
}

void loop()

{
  A=0;
  B=0;
  C=0;
  for (int i=1;i<=8;i++)
  {
    D=jklogic(A,!A);
    
    E=jklogic(B,!B);
    
    F=jklogic(C,!C);
    
    Serial.println(D);
    digitalWrite(6,E);
    digitalWrite(7,F);
    delay(1000);
    if(i%4==0)
    A=!A;
    if(i%2==0)
    B=!B;
    C=!C;
    
  }
}
