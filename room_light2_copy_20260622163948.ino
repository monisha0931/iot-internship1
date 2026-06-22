#define PIRPIN 5
#define IRPIN 7
#define LED 9
void setup()
{
  Serial.begin(115200);
  pinMode(PIRPIN,INPUT);
  pinMode(IRPIN,INPUT);
  pinMode(LED,OUTPUT);
}
void loop()
{
  int l =digitalRead(PIRPIN);
  int i =digitalRead(IRPIN);
  Serial.println("motion detect");
  Serial.write(l);
  if(l==1 && i==0)
  {
    digitalWrite(LED,HIGH);
    }
    else{
      digitalWrite(LED,LOW);
      }
      delay(1000);
      }
