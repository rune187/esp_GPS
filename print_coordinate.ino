#include <TinyGPS++.h>

TinyGPSPlus mygps;
HardwareSerial Ser1(2);

void setup() {
  // initialize both serial ports:
  Serial.begin(115200);
  Ser1.begin(9600);
}

void loop() {
  while (Ser1.available() > 0) {
    char c = Ser1.read();
    mygps.encode(c);
    if (mygps.location.isUpdated()) {
      Serial.print("LAT: "); Serial.print(mygps.location.lat(), 9);
      Serial.print(" LONG: "); Serial.println(mygps.location.lng(), 9);
      delay(2000);
    }
  }
}
