int red_pin =11 ;
int green_pin =10 ;
int blue_pin =9 ;
int heartrate = 0 ;



void setup()
{
  
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(red_pin , OUTPUT );
  pinMode(green_pin , OUTPUT );
  pinMode(blue_pin , OUTPUT );
  
   
}

void loop()
{
  int sum=0;
  Serial.println("----------------Arduino for loop----------");
  
  
  
  for (int i=1; i<=60; i++) 
  {
    int lightread=analogRead(A0);
    if (lightread>=60 && lightread<75)
    {
      sum=lightread+sum;
      Serial.println("BPM : ");
      Serial.println(lightread);
      Serial.println("Resting BPM");
      RGB_color(100,0,0);
      delay(100);
    }
    else if (lightread>=75 && lightread<90)
    {
      sum=lightread+sum;
      Serial.println("BPM : ");
      Serial.println(lightread);
      Serial.println("Normal BPM");
      RGB_color(180,0,0);
      delay(100);
    }
    else if (lightread>90 && lightread<=120)
    {
      sum=lightread+sum;
      Serial.println("BPM : ");
      Serial.println(lightread);
      Serial.println("High BPM");
      RGB_color(255,0,0);
      delay(100);
    }
    else 
    {
      Serial.println("out of range");
     }
  }
  Serial.println("------------AVG-----------------");
  int avg=sum/60;
  Serial.println(avg);
  
}

void RGB_color( int red_light_value , int green_light_value , int blue_light_value)
{
  analogWrite(red_pin , red_light_value);
  analogWrite(green_pin , green_light_value);
  analogWrite(blue_pin , blue_light_value);
}
