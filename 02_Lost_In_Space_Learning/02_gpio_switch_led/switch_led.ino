#include "Arduino.h"

#define LED_LIGHT 12
#define SWITCH_PIN 2

void setup() {
  // put your setup code here, to run once:
    pinMode(SWITCH_PIN, INPUT);
    pinMode(LED_LIGHT, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

    if(digitalRead(SWITCH_PIN) == HIGH) {
      digitalWrite(LED_LIGHT, HIGH);
    } else {
      digitalWrite(LED_LIGHT, LOW);
    }
}