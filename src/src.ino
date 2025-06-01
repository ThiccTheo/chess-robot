// When button pressed, rotate servo from 0 to 180
// When button released, rotate servo back to 0

#include <Servo.h>

Servo shoulderPivot;
Servo shoulderHinge;
Servo elbowHinge;
Servo wristHinge;

void setup() {
	shoulderPivot.attach(9);
	shoulderHinge.attach(10);
}

void loop() {
	shoulderPivot.write(0);
	shoulderHinge.write(0);
	delay(3000);
	shoulderPivot.write(180);
	shoulderHinge.write(180);
	delay(3000);
}