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
  
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(RED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(RED_PIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(BLUE_PIN, HIGH);
  delay(1000);                       // wait for a second
  digitalWrite(BLUE_PIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(GREEN_PIN, HIGH);
  delay(1000);
  
}
