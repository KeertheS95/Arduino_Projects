int pHValue;
float Voltage;

void setup(){
  Serial.begin(9600);
  pinMode(pHValue, INPUT);
}

void loop(){
  pHValue = analogRead(A0);
  Voltage = pHValue * (5.0/1023.0);
  Serial.println(Voltage);
  delay(500);
}
