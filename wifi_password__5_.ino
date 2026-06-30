#include <ESP8266WiFi.h>
void setup()
{
  Serial.begin(115200);
  Serial.println("WiFi waiting");
  WiFi.begin("vivo Y39 5G", "nisha1234");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.println("WiFi connected");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
  Serial.print("RSSI: ");
  Serial.println(WiFi.RSSI());
}
void loop()
{
}

