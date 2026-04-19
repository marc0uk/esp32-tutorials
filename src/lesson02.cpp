#include<Arduino.h>
#include "lesson02.h"

int counter =0;

void setup_lesson02() {
    Serial.begin(SERIAL_RATE);
}

void loop_lesson02_counter() {
    Serial.print("Counter value = ");
    Serial.println(counter++);
    delay(1000);
}

int Sine_LUT[32] = {128,152,176,198,218,234,245,253,255,253,245,234,218,198,176,152,128,103,79,57,37,21,10,2,0,2,10,21,37,57,79,103};
int i = 0;

void loop_lesson02_plotter() {
    Serial.println(Sine_LUT[i++]);
    if (i==32) {
        i = 0;
    }
    delay(10);
}
