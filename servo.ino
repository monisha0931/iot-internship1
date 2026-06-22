#include <Servo.h>
#define ServoPin 5
Servo S;
void setup() 
{
  Serial.begin(115200);
  S.attach(ServoPin);
}
void loop()
{
  S.write(90);
  delay(1000);
  S.write(0);
  delay(1000);
}


