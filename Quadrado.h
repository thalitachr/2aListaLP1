#ifndef QUADRADO_H
#define QUADRADO_H
#include "figuraGeometrica.h"

class Quadrado : public figuraGeometrica
{
    public:
        Quadrado();
        Quadrado(double lado);
        void setLado(double lado);
        double getLado();

       double calcularArea();

    private:
        double lado;
};

#endif // QUADRADO_H
