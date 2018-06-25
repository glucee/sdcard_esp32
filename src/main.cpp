#include "../lib/sdcard/sdcard.h"
#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
    setup_sdcard();
    /*auto calabriation when start to use the device*/
}

void loop()
{
    
}
