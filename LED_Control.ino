
/*New Blynk app with Home Automation
   Home Page
*/

#define BLYNK_TEMPLATE_ID "TMPL3zJI37BEZ"
#define BLYNK_TEMPLATE_NAME "map"
#define BLYNK_AUTH_TOKEN "3ZyrEBlAnjvyVx-e0dqUbLjmJWlOS4PE"
//Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//Define the relay pins
#define LED D4




char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "123456";//Enter your WIFI name
char pass[] = "12345678";//Enter your WIFI password

//Get the button values
BLYNK_WRITE(V0) {
  bool value1 = param.asInt();
  // Check these values and turn the relay1 ON and OFF
  if (value1 == 1) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}

//Get the button values


void setup() {
  //Set the relay pins as output pins
  pinMode(LED, OUTPUT);
 

  // Turn OFF the relay
  digitalWrite(LED, LOW);


  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}
