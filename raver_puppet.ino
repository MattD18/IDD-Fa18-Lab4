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
int light_input = 0;
int led_one = 4;  
int led_two = 5; 

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  // initialize the serial communication:
  Serial.begin(9600);
  // declare pin 9 to be an output:
  pinMode(led_one, OUTPUT);
  pinMode(led_two, OUTPUT);
}

void loop() {
  light_input = analogRead(A0);
  analogWrite(led_one, 0);
  analogWrite(led_two, 0);
  if (light_input < 100){
    analogWrite(led_one, 255);
    analogWrite(led_two, 255);
    for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(10);// waits 15ms for the servo to reach the position
    }
    for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(10);                       // waits 15ms for the servo to reach the position
    }
  }
  Serial.println(light_input);
  delay(2);
}
