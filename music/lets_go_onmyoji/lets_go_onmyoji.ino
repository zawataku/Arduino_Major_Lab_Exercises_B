const int Button = 2;
const int Pin = 13;

// 速度定義
int BPM = 150;
int quater = 60000 / BPM;
int eighth = quater / 2;
int sixteenth = eighth / 2;

void setup()
{
    pinMode(Button, INPUT_PULLUP);
}

// ループ関数
void loop()
{
    if (digitalRead(Button) == LOW)
    {
        lets_go_onmyoji();
    }
}

// 音の定義
void c_low_4()
{
    tone(Pin, 523, quater);
    delay(quater);
}
void d_low_4()
{
    tone(Pin, 587, quater);
    delay(quater);
}
void e_low_4()
{
    tone(Pin, 659, quater);
    delay(quater);
}
void f_low_4()
{
    tone(Pin, 698, quater);
    delay(quater);
}
void g_low_4()
{
    tone(Pin, 783, quater);
    delay(quater);
}
void a_low_4()
{
    tone(Pin, 880, quater);
    delay(quater);
}
void b_low_4()
{
    tone(Pin, 987, quater);
    delay(quater);
}

void c_high_4()
{
    tone(Pin, 1046, quater);
    delay(quater);
}
void d_high_4()
{
    tone(Pin, 1174, quater);
    delay(quater);
}
void e_high_4()
{
    tone(Pin, 1318, quater);
    delay(quater);
}
void f_high_4()
{
    tone(Pin, 1396, quater);
    delay(quater);
}
void g_high_4()
{
    tone(Pin, 1567, quater);
    delay(quater);
}
void a_high_4()
{
    tone(Pin, 1760, quater);
    delay(quater);
}
void b_high_4()
{
    tone(Pin, 1975, quater);
    delay(quater);
}

void c_low_sharp_4()
{
    tone(Pin, 554, quater);
    delay(quater);
}
void d_low_sharp_4()
{
    tone(Pin, 622, quater);
    delay(quater);
}
void f_low_sharp_4()
{
    tone(Pin, 739, quater);
    delay(quater);
}
void g_low_sharp_4()
{
    tone(Pin, 830, quater);
    delay(quater);
}
void a_low_sharp_4()
{
    tone(Pin, 932, quater);
    delay(quater);
}

void c_high_sharp_4()
{
    tone(Pin, 1108, quater);
    delay(quater);
}
void d_high_sharp_4()
{
    tone(Pin, 1244, quater);
    delay(quater);
}
void f_high_sharp_4()
{
    tone(Pin, 1479, quater);
    delay(quater);
}
void g_high_sharp_4()
{
    tone(Pin, 1661, quater);
    delay(quater);
}
void a_high_sharp_4()
{
    tone(Pin, 1864, quater);
    delay(quater);
}

void c_low_8()
{
    tone(Pin, 523, eighth);
    delay(eighth);
}
void d_low_8()
{
    tone(Pin, 587, eighth);
    delay(eighth);
}
void e_low_8()
{
    tone(Pin, 659, eighth);
    delay(eighth);
}
void f_low_8()
{
    tone(Pin, 698, eighth);
    delay(eighth);
}
void g_low_8()
{
    tone(Pin, 783, eighth);
    delay(eighth);
}
void a_low_8()
{
    tone(Pin, 880, eighth);
    delay(eighth);
}
void b_low_8()
{
    tone(Pin, 987, eighth);
    delay(eighth);
}

void c_high_8()
{
    tone(Pin, 1046, eighth);
    delay(eighth);
}
void d_high_8()
{
    tone(Pin, 1174, eighth);
    delay(eighth);
}
void e_high_8()
{
    tone(Pin, 1318, eighth);
    delay(eighth);
}
void f_high_8()
{
    tone(Pin, 1396, eighth);
    delay(eighth);
}
void g_high_8()
{
    tone(Pin, 1567, eighth);
    delay(eighth);
}
void a_high_8()
{
    tone(Pin, 1760, eighth);
    delay(eighth);
}
void b_high_8()
{
    tone(Pin, 1975, eighth);
    delay(eighth);
}

void c_low_sharp_8()
{
    tone(Pin, 554, eighth);
    delay(eighth);
}
void d_low_sharp_8()
{
    tone(Pin, 622, eighth);
    delay(eighth);
}
void f_low_sharp_8()
{
    tone(Pin, 739, eighth);
    delay(eighth);
}
void g_low_sharp_8()
{
    tone(Pin, 830, eighth);
    delay(eighth);
}
void a_low_sharp_8()
{
    tone(Pin, 932, eighth);
    delay(eighth);
}

void c_high_sharp_8()
{
    tone(Pin, 1108, eighth);
    delay(eighth);
}
void d_high_sharp_8()
{
    tone(Pin, 1244, eighth);
    delay(eighth);
}
void f_high_sharp_8()
{
    tone(Pin, 1479, eighth);
    delay(eighth);
}
void g_high_sharp_8()
{
    tone(Pin, 1661, eighth);
    delay(eighth);
}
void a_high_sharp_8()
{
    tone(Pin, 1864, eighth);
    delay(eighth);
}

void c_low_16()
{
    tone(Pin, 523, sixteenth);
    delay(sixteenth);
}
void d_low_16()
{
    tone(Pin, 587, sixteenth);
    delay(sixteenth);
}
void e_low_16()
{
    tone(Pin, 659, sixteenth);
    delay(sixteenth);
}
void f_low_16()
{
    tone(Pin, 698, sixteenth);
    delay(sixteenth);
}
void g_low_16()
{
    tone(Pin, 783, sixteenth);
    delay(sixteenth);
}
void a_low_16()
{
    tone(Pin, 880, sixteenth);
    delay(sixteenth);
}
void b_low_16()
{
    tone(Pin, 987, sixteenth);
    delay(sixteenth);
}

void c_high_16()
{
    tone(Pin, 1046, sixteenth);
    delay(sixteenth);
}
void d_high_16()
{
    tone(Pin, 1174, sixteenth);
    delay(sixteenth);
}
void e_high_16()
{
    tone(Pin, 1318, sixteenth);
    delay(sixteenth);
}
void f_high_16()
{
    tone(Pin, 1396, sixteenth);
    delay(sixteenth);
}
void g_high_16()
{
    tone(Pin, 1567, sixteenth);
    delay(sixteenth);
}
void a_high_16()
{
    tone(Pin, 1760, sixteenth);
    delay(sixteenth);
}
void b_high_16()
{
    tone(Pin, 1975, sixteenth);
    delay(sixteenth);
}

void c_low_sharp_16()
{
    tone(Pin, 554, sixteenth);
    delay(sixteenth);
}
void d_low_sharp_16()
{
    tone(Pin, 622, sixteenth);
    delay(sixteenth);
}
void f_low_sharp_16()
{
    tone(Pin, 739, sixteenth);
    delay(sixteenth);
}
void g_low_sharp_16()
{
    tone(Pin, 830, sixteenth);
    delay(sixteenth);
}
void a_low_sharp_16()
{
    tone(Pin, 932, sixteenth);
    delay(sixteenth);
}

void c_high_sharp_16()
{
    tone(Pin, 1108, sixteenth);
    delay(sixteenth);
}
void d_high_sharp_16()
{
    tone(Pin, 1244, sixteenth);
    delay(sixteenth);
}
void f_high_sharp_16()
{
    tone(Pin, 1479, sixteenth);
    delay(sixteenth);
}
void g_high_sharp_16()
{
    tone(Pin, 1661, sixteenth);
    delay(sixteenth);
}
void a_high_sharp_16()
{
    tone(Pin, 1864, sixteenth);
    delay(sixteenth);
}

void lets_go_onmyoji()
{
    f_low_8();
    f_low_8();
    f_low_4();
    g_low_4();
    g_low_4();

    a_low_8();
    a_low_8();
    a_low_4();
    a_low_4();
    g_low_4();

    c_low_4();
    c_low_4();
    d_low_4();
    d_low_4();

    e_low_8();
    e_low_4();
    d_low_4();
    e_low_8();
    d_low_8();
    c_low_4();

    f_low_4();
    f_low_4();
    g_low_4();
    g_low_4();

    a_low_4();
    a_low_4();
    a_low_4();
    g_low_4();

    delay(eighth);
    f_low_8();
    f_low_8();
    f_low_8();
    g_low_8();
    g_low_8();
    g_low_4();

    a_low_4();
    g_low_8();
    a_low_8();
    e_high_16();
    a_low_16();
    a_high_4();

}