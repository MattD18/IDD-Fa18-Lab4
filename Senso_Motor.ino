/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int input = 0; //var to store light input

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  // initialize the serial communication:
  Serial.begin(9600);
}

void loop() {
  input = analogRead(A0);
  // send the value of analog input 0:
  Serial.println(input);
  // wait a bit for the analog-to-digital converter to stabilize after the last
  pos = map(input, 600, 900, 0, 180);
  // reading:
  myservo.write(pos);
  delay(10);

}
