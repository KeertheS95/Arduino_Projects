
int my_array[6] = { 
                  1, 
                  2,
                  3,
                  4,
                  5
                };

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  while(!Serial){
    ;    
  }
  Serial.println("Your Array Numbers");

  for (int index = 0; index < 5 ; index++) {
    Serial.print("Index ");
    Serial.print(index);
    Serial.print(" Contains : ");
    Serial.print(my_array[index]);
    Serial.println();
  }

  Serial.println();  // New line
  Serial.println("Lets do some calculations");
  
  for(int i = 0; i < 4; i++){
    Serial.print(my_array[i]);
    Serial.print(" + ");
    Serial.print(my_array[i+1]);
    Serial.print(" = ");
    Serial.println(my_array[i] + my_array[i+1]);
  }

  Serial.println();
  Serial.println("Lets do some calcutions and store it's result");

  for(int i = 0; i < 4; i++) {
    Serial.print(my_array[i]);
    Serial.print(" + ");
    Serial.print(my_array[i+1]);
    Serial.print(" = ");
    int sum = my_array[i] + my_array[i+1];
    my_array[i] = sum;
    Serial.print(my_array[i]);
    Serial.print(" -> Index ");
    Serial.print(i);
    Serial.print(" now contains value : ");
    Serial.println(my_array[i]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
