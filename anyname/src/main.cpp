#include <Arduino.h>

void setup() {
    // Initialize serial communication at 9600 baud rate
    Serial.begin(9600);

    Serial.println("Hello, Embedded Systems!");
    Serial.println("Arduino is initializing...");
}

void loop() {
    // Print a message every second
    Serial.println("Loop is running...");
    delay(1000);
}