#include <AirControl360.h>

AirControl360 air;

void setup() {
  Serial.begin(115200);
  air.begin();
}

void loop() {
  air.update();

  if (air.swipeLeft()) Serial.println("LEFT");
  if (air.swipeRight()) Serial.println("RIGHT");
  if (air.push()) Serial.println("PUSH");
  if (air.pull()) Serial.println("PULL");

  delay(100);
}
