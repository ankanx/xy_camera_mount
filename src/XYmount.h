/*
  X Y Camera Mount controller
*/
#ifndef XYmount_h
#define XYmount_h

#include "Arduino.h"
#include <Wire.h>
#include <Servo.h>

class XYmount
{
  public:
    XYmount(int RotatePin, int TiltPin);
    void start();
    void center();
    void rotate(int degrees);
    void tilt(int degrees);
  private:
    Servo _Rotate;
    Servo _Tilt;
};

#endif
