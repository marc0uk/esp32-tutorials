#include <Arduino.h>
#include "lesson01.h"

int BTN_State = 0; // Store te button state

void setup_lesson01() {
  pinMode(LED_GPIO, OUTPUT);
  pinMode(BTN_GPIO, INPUT);
}

void loop_lesson01() {
  // Read the button state
  BTN_State = digitalRead(BTN_GPIO);
  // Assign the BTN state to the LED pin
  digitalWrite(LED_GPIO, BTN_State);
}
