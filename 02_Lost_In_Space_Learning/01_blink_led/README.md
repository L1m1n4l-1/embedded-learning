# 01 - LED Blink (Arudino Uno / Breadboard)

## Overview
This module covers the first step in embedded development: configuring a microcontroller pin digital output and toggling it to blink an LED.
The goal is to understand the basic GPIO workflow, toolchain setup, and debugging process.

## Hardware Used
    - Arduino Hero (or Arduino Uno)
    - Breadboard
    - 1 x LED Green
    - 1 x 220 ohm resistor
    - Jumper wires
    - USB cable (for power & upload)

## Wiring Diagram

    LED anode -> Resistor -> Digital Pin 12
    LED Cathode -> GND

## Concepts Practiced
    - Digital output pin config
    - Understanding HIGH vs LOW logic levels
    - Uploading Firmware to a microcontroller

## Code

void setup() {
  pinMode(LED_LIGHT, OUTPUT);
  
}

void loop() {
  digitalWrite(LED_LIGHT, HIGH);
  delay(1000);
  digitalWrite(LED_LIGHT, LOW);
  delay(100);
}
