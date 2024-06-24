const int Button = 2;

int melo = 300;
int pin = 13;

int do_low = 262;
int re = 294;
int mi = 330;
int fa = 349;
int so = 392;
int ra = 440;
int si = 494;
int do_high = 523;

void setup()
{
    pinMode(Button, INPUT_PULLUP);
}

void loop()
{
    if (digitalRead(Button) == LOW)
    {
        melody();
    }
}

void melody()
{
    tone(pin, do_low, melo);
    delay(melo);
    tone(pin, do_low, melo);
    delay(melo);
    tone(pin, so, melo);
    delay(melo);
    tone(pin, so, melo);
    delay(melo);
    tone(pin, ra, melo);
    delay(melo);
    tone(pin, ra, melo);
    delay(melo);
    tone(pin, so, melo);
    delay(melo);
    delay(melo);
    tone(pin, fa, melo);
    delay(melo);
    tone(pin, fa, melo);
    delay(melo);
    tone(pin, mi, melo);
    delay(melo);
    tone(pin, mi, melo);
    delay(melo);
    tone(pin, re, melo);
    delay(melo);
    tone(pin, re, melo);
    delay(melo);
    tone(pin, do_low, melo);
    delay(melo);
    delay(1000);
}