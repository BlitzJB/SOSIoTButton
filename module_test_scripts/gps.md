# Sample script to test the GSM module.

The output you might see in the Arduino Serial Monitor when using the provided GPS module test script. This requires that the GPS module has a clear view of the sky and is receiving satellite signals.

Example GPS NMEA Sentences:
```plaintext
$GPGGA,123519.00,4807.038,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47
$GPGSA,A,3,07,01,17,05,13,10,09,22,24,19,03,14,1.4,0.9,1.1*39
$GPRMC,123519.00,A,4807.038,N,01131.000,E,022.4,084.4,230394,003.1,W*6A
```

In these NMEA sentences:

- `$GPGGA` provides information about fix data, including latitude and longitude.
- `$GPGSA` provides information about the current GPS operating mode and the satellites being used.
- `$GPRMC` provides recommended minimum specific GPS/Transit data, including latitude, longitude, speed, and more.

These sentences contain detailed GPS information such as latitude (4807.038 N), longitude (01131.000 E), altitude (545.4 meters), and more. The format and content of these sentences may vary depending on the GPS module and the specific location where it's used.

Note that If the GPS module is indoors or obstructed from the sky, it may not receive a fix and will not produce meaningful NMEA sentences.