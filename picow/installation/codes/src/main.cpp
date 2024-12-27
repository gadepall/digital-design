#include <Arduino.h>

void setup() {
    // Initialize the onboard LED (Pin 25 on Pico W, usually LED_BUILTIN)
    pinMode(LED_BUILTIN, OUTPUT);  // Set LED_BUILTIN as an output pin
}

void loop() {
    // Turn the LED on
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
}
