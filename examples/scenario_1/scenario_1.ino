/*
 * XY camera controller
 */
#include <MotorController.h>
// Set pin 9 as our rotation control
// Set pin 10 as our tilt control
XYmount camera(9,10);

void setup() {
  Serial.begin(9600);   
  camera.start();

}

void loop() {

  camera.rotate(-20);
  delay(1000);
  camera.center();

}



