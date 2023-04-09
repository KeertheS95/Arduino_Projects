// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>
// // LiquidCrystal_I2C Serial(0x27, 16, 2);
// float calibration_value = 21.34;
// int phval = 0; 
// unsigned long int avgval; 
// int buffer_arr[10],temp;
// void setup() 
// {
//  Serial.begin(9600);
//   // Serial.init(); 
//   // Serial.begin(16, 2);
//   // Serial.backlight();
//   // Serial.setCursor(0, 0);
//   Serial.print("   Welcome to      ");
//   // Serial.setCursor(0, 1);
//   Serial.print(" Circuit Digest    ");
//   // delay(2000);
//   // Serial.clear();
// }
// void loop() {
//  for(int i=0;i<10;i++) 
//  { 
//  buffer_arr[i]=analogRead(A0);
//  delay(30);
//  }
//  for(int i=0;i<9;i++)
//  {
//  for(int j=i+1;j<10;j++)
//  {
//  if(buffer_arr[i]>buffer_arr[j])
//  {
//  temp=buffer_arr[i];
//  buffer_arr[i]=buffer_arr[j];
//  buffer_arr[j]=temp;
//  }
//  }
//  }
//  avgval=0;
//  for(int i=2;i<8;i++)
//  avgval+=buffer_arr[i];
//  float volt=(float)avgval*5.0/1024/6;
//  float ph_act = -5.70 * volt + calibration_value;
// //  Serial.setCursor(0, 0);
//  Serial.println("pH Val:");
// //  Serial.setCursor(8, 0);
//  Serial.println(ph_act);
//  delay(2000);
// }

// int pH_Value; 
// float Voltage;

// void setup() 
// { 
//   Serial.begin(9600);
//   pinMode(pH_Value, INPUT); 
// } 
 
// void loop() 
// { 
//   pH_Value = analogRead(A0); 
//   Voltage = pH_Value * (5.0 / 1023.0); 
//   Serial.println(Voltage); 
//   delay(500); 
// }


#define ph_sensor A0
float ph_value, sensor_value=0;
void setup()
{
  Serial.begin(9600);
}
void loop() {
  ph_value = analogRead(ph_sensor);
  sensor_value = (ph_value-1)/35;
  Serial.print("pH_Value : ");
  Serial.println(sensor_value);
  delay(1000);
}

