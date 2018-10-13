int read2;

void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(9,OUTPUT);
}

void loop() {
    read2= Serial.println(digitalRead(2));
    read2=digitalRead(2);
    if(read2==0)
    {
      digitalWrite(9,HIGH);
    }
    else
    {
      digitalWrite(9,LOW);
    }
}
