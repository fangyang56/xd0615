int i=0;
void setup()
{
  for (i=0;i<8;i++)
  {
    pinMode(13, OUTPUT);
  }
}

void loop()
{
  for (i=0;i<8;i++)
  {
    digitalWrite(1, HIGH);
    delay(500); // Wait for 1000 millisecond(s)
    digitalWrite(1, LOW);
    delay(500); // Wait for 1000 millisecond(s)
  }
}