#include<Arduino.h>
#include "lesson07.h"

/*
 * Note that the wiring diagram on the lesson website is wrong. The data wires
 * are plugged backwards: the code is matching the wiring listed in the table!
 */

// Create An LCD Object. Signals: [ RS, EN, D4, D5, D6, D7 ] 
LiquidCrystal My_LCD(13, 12, 14, 27, 26, 25);

void setup_lesson07() {
    Serial.begin(115200);
    delay(200);
    Serial.println("Initialising LCD - lesson07");

    // Initialise the LCD. Parameter: [ columns, rows ]
    My_LCD.begin(16, 2);
    // Clears the LCD display
    My_LCD.clear();

    // Display the first message in home position (0, 0)
    Serial.println("Hello world");
    My_LCD.print("Hello world");
    // Set the cursor position to [ col 5, row 1]
    // The next message will start from the 6th char position in the 2nd row
    // Note: 1st row has an index of 0
    My_LCD.setCursor(5, 1);
    // Display the second message in position (5, 1)
    Serial.println("GG izi");
    My_LCD.print("GG izi");
    Serial.println("END!");
}

void loop_lesson07() {

}

void setup_lesson07_scrolling() {
    Serial.begin(115200);
    delay(200);
    Serial.println("Initialising LCD - lesson07 scrolling");

    // Initialise the LCD. Parameter: [ columns, rows ]
    My_LCD.begin(16, 2);
    // Clears the LCD display
    My_LCD.clear();

    // Display The First Message In Home Position (0, 0) 
    My_LCD.print("DeepBlue"); 
    // Set The Cursor Position To: [ Col 0, Row 1] 
    // The Next Message Will Start From The 1st Char Position in The 2nd Row 
    // Note: 1st Row Has An Index of 0, The 2nd Row Has An Index of 1 
    My_LCD.setCursor(0, 1); 
    // Display The Second Message In Position (0, 1) 
    My_LCD.print("ESP32-LCD");
}

void loop_lesson07_scrolling() {
    // Shift the entire display to right 7 times
    for (int i=0; i<7; i++) {
        My_LCD.scrollDisplayRight();
        delay(500);
    }

    // Shift the entire display to left 7 times
    for (int i = 0; i < 7; i++) {
        My_LCD.scrollDisplayLeft();
        delay(500);
    }
}
