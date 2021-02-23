
// include the Servo library
// create a Servo Object
#include<Servo.h>
Servo raghavServo ;



//define the pins
int servoPin = 9 ;
int distPin = 0; 

void setup() {
  //Attach the servo object
  //we dont need to set it as an output manually 
  raghavServo.attach(servoPin);
}

void loop() {
  // lets turn the servo from 0 to 180 degrees
  //in increaments of 20 degrees

  {
    int dist = analogRead(distPin)
    int pos = map(dist,0,1023,0,180)
    raghavServo.write(pos);
  }
}
