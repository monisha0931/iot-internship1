#include <Servo.h>
#define IRPIN 5
#define ServoPIN 6
Servo S;
void setup()
{
  Serial.begin(115200);
  S.attach(ServoPIN);
  pinMode(IRPIN,INPUT);
}
void loop()
{
  int l = digitalRead (IRPIN);
  if( l== 0)
  {
    S.write(90);
  }
  else
  {
    S.write(0);
  }
}

