#include <Servo.h>
#include <math.h>

Servo base;
Servo shoulder;
Servo elbow;

const bool ROBOT_COLOR = 0;

float base_angle(char file, int rank) {
	float squareX = (ROBOT_COLOR == 0 ? 1 : -1) * (file - 96 - 4.5);
	float squareY = (ROBOT_COLOR == 0 ? rank : 9 - rank) - 0.5;
	return atan2(squareY, squareX);
}

void set_rotation(Servo* servo, int angle) {
	while (servo->read() != angle) { 
		servo->write(servo->read() + (angle - servo->read() > 0) - (angle - servo->read() < 0));
		delay(100);
	}
}

void setup() {
	base.write(0);
	shoulder.write(0);
	elbow.write(0);
	base.attach(12);
	shoulder.attach(11);
	elbow.attach(10);
}

void loop() {
	set_rotation(&base, 180);
	set_rotation(&base, 90);
	set_rotation(&shoulder, 45);
	set_rotation(&elbow, 90);
	set_rotation(&elbow, 0);
	set_rotation(&shoulder, 0);
	set_rotation(&base, 0);
}