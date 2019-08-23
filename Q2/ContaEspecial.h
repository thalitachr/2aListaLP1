#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include <iostream>
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial();

        void DefinirLimite();
};

#endif
