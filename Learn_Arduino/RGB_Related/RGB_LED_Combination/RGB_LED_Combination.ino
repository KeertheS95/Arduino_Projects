// const int red_pin = 2;
// or Use define 

#define RED_PIN 3
#define BLUE_PIN 6
#define GREEN_PIN 5


void setup() {
  // put your setup code here, to run once:
  pinMode(RED_PIN,OUTPUT);
  pinMode(BLUE_PIN,OUTPUT);
  pinMode(GREEN_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(GREEN_PIN, 50);
  analogWrite(RED_PIN, 100);
  analogWrite(BLUE_PIN, 100);
  // digitalWrite(RED_PIN, HIGH);   
  // digitalWrite(BLUE_PIN, HIGH);  
  // digitalWrite(GREEN_PIN, HIGH);
  
  
}
