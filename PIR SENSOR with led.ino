int signal=10;
int motion;
int led=11;

void setup()
{
  Serial.begin(9600);
  pinMode(signal, INPUT);
}

void loop()
{
  motion= digitalRead(signal);
  Serial.print("Motion=");
  Serial.println(motion);
  if(motion==1)
  {digitalWrite(led, HIGH);
   delay(1000);}
  else
  {digitalWrite(led, LOW);
  } 
}