#include <AccelStepper.h>

AccelStepper Xaxis(1, 2, 5); // pin 2 = step, pin 5 = direction
AccelStepper Yaxis(1, 3, 6);
const byte enablePin = 8;

void setup()
{
   pinMode(enablePin, OUTPUT);
   digitalWrite(enablePin, LOW);

   Xaxis.setMaxSpeed(100);  // divide by 3 to get rpm
   Xaxis.setSpeed(50);     // had to slow for my motor
   Xaxis.setAcceleration(80);
   Xaxis.moveTo(1000);

   Yaxis.setMaxSpeed(100);  // divide by 3 to get rpm
   Yaxis.setSpeed(50);     // had to slow for my motor
   Yaxis.setAcceleration(80);
   Yaxis.moveTo(1000);
}

void loop()
{
   //Xaxis.runSpeed();
   Xaxis.run();
   Yaxis.run();
  
}
