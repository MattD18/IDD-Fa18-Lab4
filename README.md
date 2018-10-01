# Paper Puppets

*A lab report by John Q. Student*

## In this Report

To submit your lab, clone [this repository](https://github.com/FAR-Lab/IDD-Fa18-Lab4). You'll need to describe your design, include a video of your paper display in operation, and upload any code you wrote to make it move.

## Part A. Actuating DC motors

**Link to a video of your vibration motor**

https://youtu.be/ux2LMKxAycA

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard

**a. Which color wires correspond to power, ground and signal?**

The red wire corresponds to power, brown to ground, and orange to signal.

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?**

The signal line should be attached to pin 9.

**b. What aspects of the Servo code control angle or speed?**

In the following code:
```
void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
```
The delay(x) command controls speed and the range set on the pos variable in the for-loop control angle.

## Part C. Integrating input and output

**Include a photo/movie of your raw circuit in action.**

https://youtu.be/xDE77daLwZk

## Part D. Paper puppet

**a. Make a video of your proto puppet.**

https://youtu.be/YDMoucD4fG4

## Part E. Make it your own

**a. Make a video of your final design.**
 
