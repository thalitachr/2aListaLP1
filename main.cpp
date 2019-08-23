#include <iostream>
#include "figuraGeometrica.h"
#include "Quadrado.h"
#include "TrianguloEquilatero.h"

using namespace std;

int main()
{
    figuraGeometrica *f1 = new TrianguloEquilatero(3);
    figuraGeometrica *f2 = new Quadrado(4);

    cout<<"Area Triangulo:"<<f1->calcularArea()<<endl;
    cout<<"Area Quadrado:"<<f2->calcularArea()<<endl;

    return 0;
}
