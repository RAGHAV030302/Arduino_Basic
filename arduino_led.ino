
  int switchPin =  8 ;
  int ledPin = 13  ;
  boolean lastButton = LOW ;
  boolean currentButton = LOW ;
  int ledOn = false ;
  
  void setup() {
    pinMode(switchPin,INPUT);
    pinMode(ledPin , OUTPUT);
}
boolean debounce = (boolean = last)
{
  boolean current digitalRead(switchPin);
  if (last != current)
  {
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}
void loop() {
      currentButton = debounce(lastButton);
    if(lastButton == LOW && currentButton == HIGH ) 
    {
      ledOn = !ledOn; 
    }
     lastButton = currentButton ; 
     if(ledLevel>255) ledLevel = 0 ;
     analogWrite(ledPin,ledOn);
  }
