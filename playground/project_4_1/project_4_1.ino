int ledPin1 = 5;
int ledPin2 = 6;
int ledPin3 = 9;
int ledPin4 = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledPin1, map(2, 0, 100, 0, 255));
  analogWrite(ledPin2, map(10, 0, 100, 0, 255));
  analogWrite(ledPin3, map(50, 0, 100, 0, 255));
  analogWrite(ledPin4, map(100, 0, 100, 0, 255));
}
