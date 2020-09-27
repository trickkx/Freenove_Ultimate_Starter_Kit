int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int adcValue = analogRead(A0);
  float voltage = adcValue * (5.0 / 1023.0);
  analogWrite(ledPin, map(adcValue, 0, 1023, 0, 255));

#ifdef PRINT
  Serial.print("convertValue: ");
  Serial.println(adcValue);
  Serial.print("Voltage: ");
  Serial.println(voltage);
#endif
  
  delay(500);
}
