int relayPin = 9;
int buttonPin = 12;

int buttonState = HIGH;
int relayState = LOW;
int lastButtonState = HIGH;
long lastChangeTime = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, relayState);
  Serial.begin(9600);
}

void loop() {
  int nowButtonState = digitalRead(buttonPin);
  
  if (nowButtonState != lastButtonState) {
    lastChangeTime = millis();
  }

  if (millis() - lastChangeTime > 10) {
    if (buttonState != nowButtonState) {
      buttonState = nowButtonState;
      if (buttonState == LOW) {
        relayState = ! relayState;
        digitalWrite(relayPin, relayState);
        Serial.println("Button is pressed!");
      }
      else {
        Serial.println("Button is Released!");
      }
    }
  }
  lastButtonState = nowButtonState;
}
