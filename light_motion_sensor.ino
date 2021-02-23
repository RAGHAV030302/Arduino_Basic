

int motionPin = 0 ;
int light pin = 1 ;
int led pin = 9 ;

//distance variables
int lastDist = 0 ;
int currentDist = 0 ;
//threshold for movement
int thresh = 200; 



void setup() {
  // the LED pin need to be set as an output
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // read the sensor
  int lightVal = analogRead(lightPin);
  currentDist = analogRead(motionPin);

  //does the current distance deviate from the last distance by more than the threshold?
  if ((currentDist > lastDist + thresh || currentDist < lastDist - thresh) && lightVal < 800)
  {
    digitalWrite(ledPin,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
  lastDist = currentDist ;
}
