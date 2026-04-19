#include <Arduino.h>
#include "lesson00.h"

void setup_lesson00() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop_lesson00() {
  digitalWrite(LED, HIGH);
  Serial.println("LED is on");
  delay(100);
  digitalWrite(LED, LOW);
  Serial.println("LED is off");
  delay(1000);
}