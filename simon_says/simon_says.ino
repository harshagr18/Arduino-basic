int readled[10];
int i=0,rando[10],inp[10];
static int j=1;
int flag=0;

void setup() 
{
  Serial.begin(9600);  
  pinMode(2,OUTPUT); // to show qt
  pinMode(3,OUTPUT); // to show qt
  pinMode(4,OUTPUT); // to show qt
  pinMode(5,OUTPUT); // to show qt
  pinMode(6,OUTPUT); // Correct ans
  pinMode(7,OUTPUT); // Wrong ans
  pinMode(8,INPUT); // To take I/P from button
  pinMode(9,INPUT); // To take I/P from button
  pinMode(10,INPUT); // To take I/P from button
  pinMode(11,INPUT); // To take I/P from button

}

void loop() 
{
  randomSeed(analogRead(0)); 
 
  for(i=0;i<j;i++); //Displaying LED's and storing for checking
  {
    rando[i]=random(2,6);
    digitalWrite(rando[i], HIGH);
    delay(1000);
    digitalWrite(rando[i], LOW);
    delay(500);
  }
  for(i=0;i<j;i++) //Idk how to take input
  {
    inp[i] = //dabaya hua button
  }
  for(i=0;i<j;i++) // Checking if answer tally
  {
    if(rando[i]!=inp[i])
    { flag=1; }
  } 
  if(flag==0) //Correct answer j++ and restart
  {
    digitalWrite(6,HIGH);
    delay(2000);
    digitalWrite(6,LOW);
    delay(500);
  }
  if(flag==1) //Incorrect answer need reset
  {
    digitalWrite(7,HIGH);
  }
  j++;
}
