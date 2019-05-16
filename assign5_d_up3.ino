#include "Arduino.h"
#include "dlogic.c"
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
    D=dlogic(A);
    E=dlogic(B);
    F=dlogic(C);
    Serial.println(E);
    digitalWrite(5,D); 
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
