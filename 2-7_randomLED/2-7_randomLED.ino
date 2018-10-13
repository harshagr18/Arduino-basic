int ledno;
int ledset[4]={2,7,8,12};

void setup() {
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(12,OUTPUT);
randomSeed(analogRead(0));
}

void loop() 
{
  for(int i=0; i<10; i++)
  {
   ledno=random(0,4);
   Serial.println(ledno);
   digitalWrite(ledset[ledno],HIGH);   
   delay(1000);
   digitalWrite(ledset[ledno],LOW);
   delay(1000);  
  }

}
