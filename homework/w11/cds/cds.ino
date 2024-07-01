const int LED = 13;
int val = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
}

void loop()
{
    val = analogRead(0);
    Serial.println(val);
    if (val > 700)
    {
        digitalWrite(13, LOW);
        delay(100);
    }
    else
    {
        digitalWrite(13, HIGH);
        delay(100);
    }
    delay(100);
}