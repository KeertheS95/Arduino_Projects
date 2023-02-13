void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  // pinMode(pinNumber, INPUT/OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);
  delay(1000);
  // digitalWrite(pinNumber, StateOfPin);
  digitalWrite(8, LOW);
  delay(1000);
}
