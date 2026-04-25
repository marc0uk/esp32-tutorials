#include <Arduino.h> 
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include "lesson08_static_text.h"
 
LiquidCrystal_I2C I2C_LCD1(0x27, 16, 2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
 
void setup_lesson08_static_text() {
    Serial.begin(115200);
    delay(1000);
    Serial.println("Initialising the LCD");
    // Initialize The I2C LCD
    I2C_LCD1.init();
    // Turn ON The Backlight
    I2C_LCD1.backlight();
    delay(2000);

    Serial.println("Displaying the message");
    // Print A Message To The 1st Line
    I2C_LCD1.print("Hello World!");
    // Set Cursor To Line 2
    I2C_LCD1.setCursor(0,1);
    // Print A Message To The 2nd Line
    I2C_LCD1.print("LAB18 Done!");
    Serial.println("Done!");
}
