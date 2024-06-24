const int Button = 2;
int pin = 13;

int hachibu = 180;
int shibu = 360;

int do_low = 523;
int re = 587;
int mi = 659;
int fa = 698;
int so = 783;
int ra = 880;
int si = 987;
int do_high = 1046;
int re_high = 1174;
int mi_high = 1318;
int fa_high = 1396;

int do_low_sh = 554;
int re_sh = 622;
int fa_sh = 739;
int so_sh = 830;
int ra_sh = 932;
int do_high_sh = 1108;

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
    tone(pin, mi, hachibu);
    delay(hachibu);

    tone(pin, so, hachibu);
    delay(hachibu);

    tone(pin, ra, shibu);
    delay(shibu);

    tone(pin, mi_high, shibu);
    delay(shibu);

    tone(pin, ra, shibu);
    delay(shibu);

    tone(pin, so, hachibu);
    delay(hachibu);

    tone(pin, ra, shibu);
    delay(shibu);

    tone(pin, mi_high, hachibu);
    delay(hachibu);

    tone(pin, ra, hachibu);
    delay(hachibu);

    tone(pin, so, hachibu);
    delay(hachibu);

    tone(pin, ra, shibu);
    delay(shibu);

    tone(pin, mi, hachibu);
    delay(hachibu);

    tone(pin, so, hachibu);
    delay(hachibu);

    tone(pin, ra, shibu);
    delay(shibu);

    tone(pin, do_high, shibu);
    delay(shibu);

    tone(pin, si, shibu);
    delay(shibu);

    tone(pin, so, hachibu);
    delay(hachibu);

    tone(pin, ra, shibu);
    delay(shibu);

    tone(pin, si, hachibu);
    delay(hachibu);

    tone(pin, do_high, hachibu);
    delay(hachibu);

    tone(pin, re_high, hachibu);
    delay(hachibu);

    tone(pin, fa_high, shibu);
    delay(shibu);

    tone(pin, mi_high, shibu);
    delay(shibu);
}