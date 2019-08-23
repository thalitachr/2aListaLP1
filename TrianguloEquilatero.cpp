#include "TrianguloEquilatero.h"

TrianguloEquilatero::TrianguloEquilatero()
{
    lado=0;
}
TrianguloEquilatero::TrianguloEquilatero(double lado)
{
    setLado(lado);
}

void TrianguloEquilatero::setLado(double lado)
{
    setLado(lado);
}

double TrianguloEquilatero::getLado()
{
    return lado;
}

double TrianguloEquilatero::calcularArea()
{
    return (lado*lado)/2;
}
