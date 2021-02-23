int potPin = 0 ;
void setup( )
{
  //sets the button pin as an input 
  pinMode(potPin,INPUT);
  //allows us to communicate from the arduino
  Serial.begin(9600);
}
{
  //print the button state to a serial terminal
  Serial.println(analogRead(potPin));
  //wait one second and then print again
  delay(1000); 
}
