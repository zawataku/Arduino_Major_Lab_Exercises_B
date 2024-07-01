const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
const int buttonPin = 2;

void setup()
{
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
    if (digitalRead(buttonPin) == LOW)
    {
        smoothColorTransition();
    }
    else if (digitalRead(buttonPin) == HIGH)
    {
        analogWrite(redPin, 0);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, 0);
    }
}

void smoothColorTransition()
{
    for (int i = 0; i < 256; i++)
    {
        if (digitalRead(buttonPin) == HIGH)
        {
            break;
        }
        analogWrite(redPin, i);
        analogWrite(greenPin, 255 - i);
        analogWrite(bluePin, (i < 128) ? 2 * i : 2 * (255 - i));
        delay(10);
    }
    for (int i = 255; i >= 0; i--)
    {
        if (digitalRead(buttonPin) == HIGH)
        {
            break;
        }
        analogWrite(redPin, i);
        analogWrite(greenPin, 255 - i);
        analogWrite(bluePin, (i < 128) ? 2 * i : 2 * (255 - i));
        delay(10);
    }
}
