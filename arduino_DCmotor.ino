 
int motorPin = 8 ;
  
  
 void setup() {
 pinMode(motorPin,OUTPUT);
}

void loop() {
  //Accelrate Motor from 0 - 255
  for (int i = 0 ; i < 255 ; i++)
  {
    analogWrite(motorPin , i ) ;
    delay(10);
  }
  //hold at top speed
  delay(500);

  //decrease speed
  for ( i = 255 ; i >= 0 ; i--)
  {
    analogWrite(motorPin,i);
    delay(10);
  }
  //hold at zero
  delay(500);
}
