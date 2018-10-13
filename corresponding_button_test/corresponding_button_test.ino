int ledno;
int readled;
void setup() {
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(11,OUTPUT);
pinMode(7,INPUT_PULLUP);
pinMode(8,INPUT_PULLUP);
randomSeed(analogRead(0));
}

void loop()
{
  delay(500);
  ledno=random(2,4);
  Serial.println(ledno);
  digitalWrite(ledno,HIGH);   
  delay(400);
  if(ledno==2)
  {
    readled=digitalRead(7);
    Serial.println(readled);
    if(readled==0)
    digitalWrite(11,HIGH);
    delay(100);
  }
  if(ledno==3)
  {
    readled=digitalRead(8);
    Serial.println(readled);
    if(readled==0)
    digitalWrite(11,HIGH);
    delay(100);
  }
  digitalWrite(ledno,LOW);
  delay(2000);
  digitalWrite(11,LOW);
}
