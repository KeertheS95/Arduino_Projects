char my_array[6] = {'a','b','c','d','e'};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  while(!Serial){
    ;
  }

  // The characters have ASCII place holders or indexes
  Serial.println("Your Character Array");
  for(int i = 0; i < 5;  i++) {
    Serial.print("Index ");
    Serial.print(i);
    Serial.print(" Contains char '");
    Serial.print(my_array[i]);
    Serial.print("', ASCHII Decimal ");
    Serial.println(my_array[i], DEC);
  }

Serial.println();
  
  for(int i = 0; i < 4; i++){
    Serial.print(my_array[i]);
    Serial.print(" + ");
    Serial.print(my_array[i+1]);
    Serial.print(" = ");
    Serial.println(my_array[i] + my_array[i+1]);    // will only add the decimal postion number not concatenate the characters
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
