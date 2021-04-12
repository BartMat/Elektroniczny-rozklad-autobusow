#include "Czas.h"

ostream& operator<<(ostream& os, const Czas& c)
{
    os << c.godzina << ':' << c.minuta;
    return os;
}

Czas Czas::operator-(Czas c)
{
    Czas temp;
    temp.godzina = godzina - c.godzina;
    temp.minuta = minuta - c.minuta;
    if (minuta < 0)
    {
        minuta = 60 + minuta;
        godzina--;
    }
    return temp;
}

Czas::Czas()
{
    minuta = 0;
    godzina = 0;
}

Czas::Czas(int g, int m)
{
    godzina = g;
    minuta = m;
}

Czas::~Czas()
{
}

int Czas::get_g()
{
    return godzina;
}

int Czas::get_m()
{
    return minuta;
}

void Czas::set_g(int g)
{
    godzina = g;
}

void Czas::set_m(int m)
{
    minuta = m;
}
