int inInt;
int ledPin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
}

void serialEvent() {
  if (Serial.available()) {
    inInt = Serial.parseInt();
    Serial.print("received: ");
    Serial.println(inInt);

    analogWrite(ledPin, constrain(inInt, 0, 255));
  }
}
