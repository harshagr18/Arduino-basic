const int ledPin=9;

void setup() {
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() {
  static int delayperiod =100;
  static int countdir=1;
  digitalWrite(ledPin, HIGH);
  delay(delayperiod);
  digitalWrite(ledPin, LOW);
  delay(delayperiod); 
  countdir= dirchange(delayperiod, countdir);
  delayperiod += 100* countdir;
  Serial.print("New wait time: ");
  Serial.println(delayperiod);
} 

int dirchange(int delayperiod, int countdir)
{
  if((delayperiod==1000) || (delayperiod == 0))
  { countdir *= -1; 
    if(countdir < 0)
    {
      Serial.println("Going DOWN");
    }
    else
    {
      Serial.println("Going up");
    }
   }  
return countdir;      
}
