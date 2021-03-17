
int red_pin = 11 ;
int green_pin = 10 ;
int blue_pin = 9 ;
int sensorPIN = A0 ;
float sensorValue = 0;
int heartrate = 0 ;
float count = 0 ;
unsigned long start_time = 0 ;


void setup()
  {
   pinMODE(red_pin , OUTPUT );
   pinMODE(green_pin , OUTPUT );
   pinMODE(blue_pin , OUTPUT );
   pinMODE(A0 , INPUT);
   Serial.begin(9600);
  }

void loop()
  {
    starttime = millis();

    while (millis()<starttime+1000)
    {
    sensorValue = analogRead(A0);
    if (sensorValue > 550)
    {
      count ++;
      if (count > 1 && count <= 1.33)
      {
        Serial.print("Normal BPM");
        RGB_color(205,0,0);
        delay(100);
      }

       else if ( count < 1)
       {
        Serial.print("Low BPM");
        RGB_color(153,0,0);
        delay(100);
       }
       else if ( count > 1.33) 
       {
        Serial.print("High BPM");
        RGB_color(255,0,0);
        delay(100);
       }
    }
    }

    heartrate = count ;
    Serial.print("BPM = ");
    Serial.print(heartrate);
    count = 0 ;

    
  }
