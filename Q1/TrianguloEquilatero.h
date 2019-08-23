#ifndef TRIANGULOEQUILATERO_H
#define TRIANGULOEQUILATERO_H
#include "figuraGeometrica.h"

class TrianguloEquilatero : public figuraGeometrica
{
    public:
        TrianguloEquilatero();
        TrianguloEquilatero(double lado);
        void setLado(double lado);
        double getLado();

       double calcularArea();

    private:
        double lado;
};

#endif // TRIANGULOEQUILATERO_H
