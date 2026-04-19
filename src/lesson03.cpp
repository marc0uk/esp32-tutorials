#include<Arduino.h>
#include "lesson03.h"

int PWM1_DutyCycle = 0;

void setup_lesson03() {
    ledcAttachPin(LED_GPIO, PWM1_CH);
    ledcSetup(PWM1_CH, PWM1_FREQ, PWM1_RES);
}

void loop_lesson03() {
    //while(PWM1_DutyCycle < 255) {
    while(PWM1_DutyCycle < 15) {
        ledcWrite(PWM1_CH, PWM1_DutyCycle++);
        delay(100);
    }
    while(PWM1_DutyCycle > 0) {
        ledcWrite(PWM1_CH, PWM1_DutyCycle--);
        delay(100);
    }
}
