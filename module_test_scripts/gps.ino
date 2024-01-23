#include <SoftwareSerial.h>

SoftwareSerial gpsSerial(4, 5); // RX, TX

void setup() {
  Serial.begin(9600);

  gpsSerial.begin(9600);
}

void loop() {
  while (gpsSerial.available() > 0) {
    char c = gpsSerial.read();
    Serial.write(c);
  }
}
