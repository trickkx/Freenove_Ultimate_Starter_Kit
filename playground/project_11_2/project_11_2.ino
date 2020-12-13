#include <Servo.h>

Servo servo;

int servoPin = 3;
int potPin = 0;

void setup() {
  servo.attach(servoPin);
}

void loop() {
  int potVal = analogRead(potPin);
  potVal = map(potVal, 0, 1023, 0, 180);
  servo.write(potVal);
  delay(15);
}
