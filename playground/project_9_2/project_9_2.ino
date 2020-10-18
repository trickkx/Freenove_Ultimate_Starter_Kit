int buzzerPin = 9;
float sinVal;
int toneVal;


void setup(){
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  for (int x = 0; x < 360; x++) {
    sinVal = sin(x * (PI /180));
    toneVal = 2000 + sinVal * 500;
    tone(buzzerPin, toneVal);
    delay(1);
  }
}
