#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main()
{
    Conta *c1 = new Conta();
    ContaEspecial *ces = new ContaEspecial();

    c1->Depositar(100);
    ces->Depositar(200);

    cout << "Saldo disponivel c1" << c1->getSaldo() << endl;
    cout << "Saldo disponivel ces" << ces->getSaldo() << endl;

    c1->Sacar(50);
    ces->Sacar(50);

    cout << "Saldo disponivel c1 " << c1->getSaldo() << endl;
    cout << "Saldo disponivel ces" << ces->getSaldo() << endl;

    c1->setSalarioMensal(1000);
    c1->DefinirLimite();

    ces->setSalarioMensal(1000);
    ces->DefinirLimite();

    cout << "Limite disponivel - c1" << c1->getLimite() << endl;
    cout << "Limite disponivel - ces" << ces->getLimite() << endl;

    return 0;
}
