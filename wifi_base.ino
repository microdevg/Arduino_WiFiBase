#include <WiFi.h>

#define WIFI_SSID   "esp322025"
#define WIFI_PASS   "esp322025"

void Mqtt_client(){
  Serial.print("Aqui inicio mi cliente MQTT\n");
}


void setup(){
  Serial.begin(115200);
  Serial.print("Inicio el programa\n");
    pinMode(2, OUTPUT);

  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");  }
  Serial.print("IP: "); Serial.println(WiFi.localIP());
  Mqtt_client();
}

void loop(){
digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);

}


