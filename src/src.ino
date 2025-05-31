// When button pressed, rotate servo from 0 to 180
// When button released, rotate servo back to 0

#include <Servo.h>

Servo servo;

void setup() {
	servo.attach(9);
}

void loop() {
	if (digitalRead(2) == HIGH) {
		servo.write(180);
	} else {
		servo.write(0);
	}
}