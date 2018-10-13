int a[10],i;
int button1,button2,button3,button4;
void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP); //Button1
  pinMode(3,INPUT_PULLUP); //Button2
  pinMode(4,INPUT_PULLUP); //Button3
  pinMode(5,INPUT_PULLUP); //Button4
  pinMode(8,OUTPUT); //LED1
  pinMode(9,OUTPUT); //LED2
  pinMode(10,OUTPUT); //LED3
  pinMode(11,OUTPUT);  //LED4
  pinMode(12,OUTPUT); //LED to show recording
}
void loop() {
  for(i=0;i<10;i++) // To take input while LED12 is on.
  {
   digitalWrite(12,HIGH);
   delay(1000);
   button1= digitalRead(2);
   button2= digitalRead(3);
   button3= digitalRead(4);
   button4= digitalRead(5);
   digitalWrite(12,LOW);
   delay(1000);
   if(button1==0)
   { a[i]=1; }
   else if(button2==0)
   { a[i]=2; }
   else if(button3==0)
   { a[i]=3; }
   else if(button4==0)
   { a[i]=4; }
   else a[i]=1;
  }
  for(i=0;i<10;i++) //TO GIVE OUTPUT 
  {
   switch(a[i])
   {
    case 1:
    {
      digitalWrite(8,HIGH);
      delay(500);
      digitalWrite(8,LOW);
      delay(500);
      break;
    }
    case 2:
    {
      digitalWrite(9,HIGH);
      delay(500);
      digitalWrite(9,LOW);
      delay(500);
      break;
    }
    case 3:
    {
      digitalWrite(10,HIGH);
      delay(500);
      digitalWrite(10,LOW);
      delay(500);
      break;
    }
    case 4:
    {
      digitalWrite(11,HIGH);
      delay(500);
      digitalWrite(11,LOW);
      delay(500);
      break;
    }
   }  
  }
}
