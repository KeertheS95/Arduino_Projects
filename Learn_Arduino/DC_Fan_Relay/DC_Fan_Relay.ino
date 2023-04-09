

int relayFan = 7;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(relayFan, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  delay(10000);
  digitalWrite(7, LOW);
  delay(10000);
}
