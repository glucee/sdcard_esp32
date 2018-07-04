#include "../lib/sdcard/sdcard.h"
#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
    setup_sdcard();
    test_sdcard();
}

void loop()
{
    
}
