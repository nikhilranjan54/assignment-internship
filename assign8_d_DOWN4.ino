#include "Arduino.h"
#include "dlogic.c"
int A,B,C,Z,E,F,G,H;
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
  Z=1;
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
   
    H=dlogic(A);
    G=dlogic(B);
    F=dlogic(C);
    E=dlogic(Z);
    
    digitalWrite(5,E);
    digitalWrite(6,F);
    digitalWrite(7,G);
    digitalWrite(8,H);
}
    Z=!Z;
    Serial.println(G);
    if(i>5)
    {
    delay(1000);
    }
  }
}
