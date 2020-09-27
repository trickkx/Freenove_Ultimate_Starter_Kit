int buttonPin = 12;
int ledPin = 9;
bool isLighting = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin) == LOW) {
    delay(10);
    if (digitalRead(buttonPin) == LOW) {
      reverseLed();
      while (digitalRead(buttonPin) == LOW);
      delay(10);
    }
  }
}

void reverseLed() {
  if (isLighting) {
    digitalWrite(ledPin, LOW);
    isLighting = false;
  }
  else {
    digitalWrite(ledPin, HIGH);
    isLighting = true;
  }
}
