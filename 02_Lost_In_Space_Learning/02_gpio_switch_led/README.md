# 02 - GPIO SWITCH LED (Arduino Hero / Breadboard)

## Overview
This module covered a basic GPIO (General Purpose Input/Output) interaction using an Arduino. A dip switch is connected to the digital input pin,
and an LED is driven based on the switch state. The goal is to practice fundamental embedded concepts: configuring pin modes, reading digital inputs,
and verifying behavior through real time hardware interaction.

## Hardware
    - Arduino Hero (Arduino Uno)
    - Breadboard
    - 1 x LED Green
    - 1 x 220 ohm resistor
    - 1 x 10k ohm resistor
    - 1 x Dip switch
    - Jumper wires
    - USB Cable(for power and digital upload)

## Wiring Diagram
    LED anode -> 220 Resistor -> Digital Pin 12
    LED cathode -> GND
    5 volt -> Dip Switch -> Digital Pin 2 -> 10k Resistor -> GND

## Concepts Practiced
    - DPIO pin config
    - Understanding Up/Down considerations for switch inputs
    - Mapping physical hardware interaction to software logic
    - Building a minimal I/O control loop on embedded hardware

## Code

    if(digitalRead(SWITCH_PIN) == HIGH) {
      digitalWrite(LED_LIGHT, HIGH);
    } else {
      digitalWrite(LED_LIGHT, LOW);
    }
