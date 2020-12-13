int in1Pin = 10; // Channel 1 pin
int in2Pin = 9; // Channel 2 pin
int enable1Pin = 11; // Enable 1 pin
int potenDirectionPin = A0;
int potenDirectionThreshold = 512;

void setup() {
  Serial.begin(9600);
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(enable1Pin, OUTPUT);
}

void loop() {
  int potenVal = analogRead(potenDirectionPin);

  int rotationDir = false;
  if (potenVal > potenDirectionThreshold){
    rotationDir = true;
  }

  PrintVar("rotationDir", rotationDir);

  int rotationSpeed = abs(potenVal - potenDirectionThreshold);
  driveMotor(rotationDir, map(rotationSpeed, 0, potenDirectionThreshold, 0, 255));
}

void driveMotor(bool dir, int spd) {
  PrintVar("dir", dir);
  PrintVar("spd", spd);
  
  if (dir) {
    digitalWrite(in1Pin, HIGH);
    digitalWrite(in2Pin, LOW);
  }
  else {
    digitalWrite(in1Pin, LOW);
    digitalWrite(in2Pin, HIGH);
  }

  analogWrite(enable1Pin, constrain(spd, 0, 255));
}

void PrintVar(char *varName, int var) {
  Serial.print(varName);
  Serial.print(": ");
  Serial.println(var);
}
 
