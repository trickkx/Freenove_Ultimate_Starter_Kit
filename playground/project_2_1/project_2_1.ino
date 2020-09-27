int led1Pin = 4;
int led2Pin = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, LOW);
  delay(1000);

  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, HIGH);
  delay(1000);
}
