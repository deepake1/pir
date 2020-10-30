int signal=10;
int motion;

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
}