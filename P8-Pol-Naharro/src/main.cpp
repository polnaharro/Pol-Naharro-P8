#include <Arduino.h>

void setup() {

  Serial.begin(9600);
  Serial2.begin(9600);
}

void loop() {
  if(Serial.available()){
    Serial2.write(Serial.read());
    
    delay(2);
    
    if(Serial2.available()){
      Serial.write(Serial2.read());

    } 
  }

}