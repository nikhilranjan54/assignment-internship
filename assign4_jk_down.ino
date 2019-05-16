#include "Arduino.h"
#include "jklogic.c"
int A,B,C,D,E,F,G,H;
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop()

{
  A=1;
  B=1;
  C=1;
  D=1;
  for (int i=0;i<=15;i++)
 {
   if(i%8==0&&i!=0)
  A=!A;
  if(i%4==0&&i!=0)
  B=!B;
  if(i%2==0&&i!=0)
  C=!C;
 if(i>5)
{
   
    H=jklogic(A,!A);
    G=jklogic(B,!B);
    F=jklogic(C,!C);
    E=jklogic(D,!D);
    
    digitalWrite(5,E);
    digitalWrite(6,F);
    digitalWrite(7,G);
    digitalWrite(8,H);
}
    D=!D;
    Serial.println(G);
    if(i>5)
    {
    delay(1000);
    }
  }
}
