#include "Arduino.h"

#define LED_LIGHT 12

void setup() {
  pinMode(LED_LIGHT, OUTPUT);
  
}

void loop() {
  digitalWrite(LED_LIGHT, HIGH);
  delay(1000);
  digitalWrite(LED_LIGHT, LOW);
  delay(100);
}