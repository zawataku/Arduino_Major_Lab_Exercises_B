const int greenPin = 13;
const int redPin = 10;
const int fullcolor_Pin1 = 7;
const int fullcolor_Pin2 = 6;
const int fullcolor_Pin3 = 5;
const int buttonPin = 3;

void setup()
{
    pinMode(greenPin, OUTPUT);
    pinMode(redPin, OUTPUT);
    pinMode(fullcolor_Pin1, OUTPUT);
    pinMode(fullcolor_Pin2, OUTPUT);
    pinMode(fullcolor_Pin3, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
    if (digitalRead(buttonPin) == HIGH)
    {
        digitalWrite(greenPin, HIGH);
        dark_led();
        fullcolor();
    }
    else
    {
        analogWrite(greenPin, 0);
        analogWrite(redPin, 0);
        analogWrite(fullcolor_Pin1, 0);
        analogWrite(fullcolor_Pin2, 0);
        analogWrite(fullcolor_Pin3, 0);
    }
}

void dark_led()
{
    analogWrite(redPin, 128);
}

void fullcolor()
{
    analogWrite(fullcolor_Pin1, 255);
    analogWrite(fullcolor_Pin2, 128);
    analogWrite(fullcolor_Pin3, 0);
    delay(30);
    analogWrite(fullcolor_Pin1, 128);
    analogWrite(fullcolor_Pin2, 0);
    analogWrite(fullcolor_Pin3, 255);
    delay(30);
    analogWrite(fullcolor_Pin1, 0);
    analogWrite(fullcolor_Pin2, 255);
    analogWrite(fullcolor_Pin3, 128);
}