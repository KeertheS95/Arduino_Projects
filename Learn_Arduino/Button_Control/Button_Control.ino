int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(2);
  
  if(buttonState == HIGH) {
    digitalWrite(4, HIGH);
    Serial.println("State of button is HIGH");
  }
  else {
    digitalWrite(4, LOW);
    Serial.println("State of button is LOW");
  }
}
