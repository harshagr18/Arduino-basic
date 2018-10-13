void setup() {
  Serial.begin(9600);

  randomSeed(analogRead(0));
  for(int i=0; i<10; i++)
  {
    Serial.println(random(1,10));
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
