const int LED = 13;
const int Button = 2;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(Button, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(Button) == low)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}