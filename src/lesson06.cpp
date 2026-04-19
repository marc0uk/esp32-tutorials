#include<Arduino.h>
#include "lesson06.h"

void IRAM_ATTR isr() {
    // Toggle the LED
    digitalWrite(LED1_GPIO, !digitalRead(LED1_GPIO));
}

void setup_lesson06() {
    Serial.begin(115200);
    pinMode(LED1_GPIO, OUTPUT);
    pinMode(BTN1_GPIO, INPUT);
    attachInterrupt(BTN1_GPIO, isr, FALLING);
    delay(3000);
    Serial.println("Started");
}

void loop_lesson06() {
    // Do nothing
}