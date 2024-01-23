#include <SoftwareSerial.h>

// RX and TX connected to pins 3 and 2 respectively
SoftwareSerial gsmSerial(3, 2);

void setup()
{
    Serial.begin(9600);
    while (!Serial)
    {
        ; 
    }

    gsmSerial.begin(9600);
    Serial.println("Testing GSM Module...");

    gsmSerial.println("AT");
}

void loop()
{
    if (gsmSerial.available())
    {
        Serial.write(gsmSerial.read());
    }

    if (Serial.available())
    {
        gsmSerial.write(Serial.read());
    }
}
