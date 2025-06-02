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
	base.attach(9);
}

void loop() {
	base.write(degrees(baseAngle('a', 1)));
	delay(2000);
	base.write(degrees(baseAngle('b', 2)));
	delay(2000);
	base.write(degrees(baseAngle('c', 3)));
	delay(2000);
	base.write(degrees(baseAngle('d', 4)));
	delay(2000);
	base.write(degrees(baseAngle('e', 5)));
	delay(2000);
	base.write(degrees(baseAngle('f', 6)));
	delay(2000);
	base.write(degrees(baseAngle('g', 7)));
	delay(2000);
	base.write(degrees(baseAngle('h', 8)));
	delay(2000);
	base.write(degrees(baseAngle('g', 7)));
	delay(2000);
	base.write(degrees(baseAngle('f', 6)));
	delay(2000);
	base.write(degrees(baseAngle('e', 5)));
	delay(2000);
	base.write(degrees(baseAngle('d', 4)));
	delay(2000);
	base.write(degrees(baseAngle('c', 3)));
	delay(2000);
	base.write(degrees(baseAngle('b', 2)));
	delay(2000);
}