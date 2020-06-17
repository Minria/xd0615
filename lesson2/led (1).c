int i=0;
int a=0;
void setup()
{
  for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<8;i++)
  {
    a=i+2;
    if(a>=8)
    {
      a=a-8;
    }
     digitalWrite(i, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(i, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(a, HIGH);
     delay(1000); // Wait for 1000 millisecond(s)
     digitalWrite(a, LOW);
     delay(1000); // Wait for 1000 millisecond(s)
  }
}