/*
  Standard Servo with Ramping.c
  
  Moves servo to 0, 90 and 180 degrees.  Allows 2 seconds to get to 
  each position.  Uses ramping to gradually move the servo to the target.
  
  learn.parallax.com/propeller-c-simple-devices/standard-servo-ramping  
*/

#include "simpletools.h"                      // Include simpletools header
#include "servo.h"                            // Include servo header

int main()                                    // Main function
{
  servo_angle(14, 0);                         // P14 servo to 0 degrees
  pause(500);                                 // Allow 1/2 second to get there
  servo_setramp(14, 7);                       // Change by up to 7/10 degree/ms 
  servo_angle(14, 1800);                      // P14 servo to 180 degrees
  pause(6000);                                // Allow 4 seconds to get there
                                              // (with ramping in effect)
  servo_stop();                               // Stop servo process
}

