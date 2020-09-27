int counter = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("counter:");
  Serial.println(counter);
  delay(500);
  counter++;
}
