int ledPinR = 11;
int ledPinG = 10;
int ledPinB = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  handleLed(A0, ledPinR);
  handleLed(A1, ledPinG);
  handleLed(A2, ledPinB);
}

void handleLed(int input, int output) {
    int adcValue = analogRead(input);
  analogWrite(output, map(adcValue, 0, 1023, 0, 255));
}
