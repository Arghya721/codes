#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "SmsmKXk41LL3zUAeRbLX4DUa03QHu_DJ";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Realme 3 Pro";
char pass[] = "7501277191";

void setup()
{
// Debug console
Serial.begin(9600);

Blynk.begin(auth, ssid, pass);
// You can also specify server:
//Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
//Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
Blynk.run();
}
