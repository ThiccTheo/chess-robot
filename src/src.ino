// When button pressed, rotate servo from 0 to 180
// When button released, rotate servo back to 0

#include <Servo.h>
#include <math.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist;
Servo gripper;

const bool ROBOT_COLOR = 0;

float baseAngle(char file, int rank) {
	float squareX = (ROBOT_COLOR == 0 ? 1 : -1) * (file - 96 - 4.5);
	float squareY = (ROBOT_COLOR == 0 ? rank : 9 - rank) - 0.5;
	return atan2(squareY, squareX);
}

void setup() {
	base.attach(12);
	shoulder.attach(11);
	elbow.attach(10);
}

void loop() {
}