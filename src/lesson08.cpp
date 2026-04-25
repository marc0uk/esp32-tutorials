#include<Arduino.h>
#include<Wire.h>
#include "lesson08.h"

TwoWire I2C_0 = TwoWire(0);

 void setup_lesson08_scanner() {
    Serial.begin(115200);
    I2C_0.begin(SDA_0, SDL_0, I2C_FREQ);
    delay(3000);
    Serial.println("Started");
 }

 void loop_lesson08_scanner() {
    byte error, address;
    int nDevices;

    Serial.println("Scanning...");

    nDevices = 0;
    for (address = 1; address < 127; address++) {
        // The i2c_scanner uses the return value of
        // the Write.endTransmisstion to see if
        // a device did acknowledge to the address.
        I2C_0.beginTransmission(address);
        error = I2C_0.endTransmission();

        if (error == 0) {
            Serial.print("I2C device found at address 0x");
            if (address < 16)
                Serial.print("0");
            Serial.print(address, HEX);
            Serial.println(" !");

            nDevices++;
        } else if (error == 4) {
            Serial.print("Unknown error at address 0x");
            if (address < 16)
                Serial.print("0");
            Serial.print(address, HEX);
        }
    }
    if (nDevices == 0) {
        Serial.print("No I2C devides found\n");
    } else {
        Serial.println("Done\n");
    }
    delay(5000); // Wait 5 seconds for the next scan
 }