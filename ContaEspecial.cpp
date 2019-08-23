#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    nomeCliente = "sem nome";
    salarioMensal = 0;
    saldo = 0;
    limite = 0;
    numeroConta = 0;
}
void ContaEspecial::DefinirLimite(){
    limite = salarioMensal * 3;
}
