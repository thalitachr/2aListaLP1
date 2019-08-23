#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>
#include <string>

class figuraGeometrica
{
    public:
        figuraGeometrica();
        //void setNome(std::string);
        std::string getNome();

        virtual double calcularArea() = 0;

    protected:
        std::string nome;
};

#endif // FIGURAGEOMETRICA_H
