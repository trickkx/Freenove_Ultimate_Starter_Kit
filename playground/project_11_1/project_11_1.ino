#include <Servo.h>

Servo servo;
int servoPin = 3;

void setup() {
  servo.attach(servoPin);
}

void loop() {
  for (int pos = 0; pos <= 180; pos++) {
    servo.write(pos);
    delay(15);
  }

  for (int pos = 180; pos >= 0; pos--) {
    servo.write(pos);
    delay(15);
  }
}
