#include <Blynk.h>

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define ON HIGH
#define OFF LOW
char auth[] = ""; //รหัส Token Blynk
char ssid[] = ""; //ชื่อ wifi
char pass[] = ""; //รหัส wifi

void setup()
{

Serial.begin(9600);
Blynk.begin(auth, ssid, pass);

}

void loop()
{
Blynk.run();
}
