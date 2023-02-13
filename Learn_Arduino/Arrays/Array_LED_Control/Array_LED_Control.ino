const int ledPin = 7;
const int totalStates = 10; // Size of the array that will contain the number of states of led

int ledStates[totalStates] = {1,0,1,0,1,0,0,1,0}; // led state array
// int ledStates[totalStates]
int ledDuration[totalStates] = {200,400,500,100,200,50,50,500,500,}; // led duration per state



void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < totalStates; i++) {
    digitalWrite(ledPin, ledStates[i]);
    delay(ledDuration[i]);
  }
}
