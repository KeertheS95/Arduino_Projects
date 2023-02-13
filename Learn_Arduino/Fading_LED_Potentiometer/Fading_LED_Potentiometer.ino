 void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // analogue read allows values from 0 to 1023
  int potValue = analogRead(A0);
  
  // we use map function to reduce pot value range from 0-1023 to 0-255
  int mappedValue = map(potValue, 0, 1023, 0, 255);
  // analog write allows values 0 to 255
  analogWrite(6, mappedValue);
}
