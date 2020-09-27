int buttonPin = 12;
int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin) == HIGH)
    digitalWrite(ledPin, LOW);
  else
    digitalWrite(ledPin, HIGH);
}
