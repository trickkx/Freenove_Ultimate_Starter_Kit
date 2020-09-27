int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int adcValue = analogRead(A0);
  analogWrite(ledPin, map(adcValue, 0, 1023, 0, 255));
}
