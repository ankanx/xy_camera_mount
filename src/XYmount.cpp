/*
  X Y Camera Mount controller
*/
#include "Arduino.h"
#include "XYmount.h"

/*
  IDLE Value 
*/
#define CENTER 90



XYmount::XYmount(int RotatePin,int TiltPin)
{
    Servo _Rotate;
    _Rotate.attach(RotatePin);
    Servo _Tilt;
    _Tilt.attach(TiltPin);
}
void XYmount::start()
{
   _Rotate.write(IDLE);
   _Tilt.write(IDLE);
}

void XYmount::setIdle()
{
  _Rotate.write(IDLE);
  _Tilt.write(IDLE);
}

void XYmount::rotate(int degrees)
{
 _Rotate.write(90+(degrees));
}

void XYmount::tild(int degrees)
{
 _Tilt.write(90+(degrees));
}
