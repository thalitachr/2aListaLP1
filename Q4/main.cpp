#include <iostream>
#include "Ginecologista.h"
#include "Cirurgiao.h"
#include "Otorrino.h"
#include "Oftalmologista.h"

using namespace std;

int main(){
    Medico *c1 = new Cirurgiao();
    Medico *g1 = new Ginecologista();
    Medico *ot1 = new Otorrino();
    Medico *of1 = new Oftalmologista();

    cout << c1->getEspecializacao() << ":\n";
    c1->RealizaCirurgia();
    cout << endl;

    cout << g1->getEspecializacao() << ":\n";
    g1->RealizaCirurgia();
    cout << endl;

    cout << ot1->getEspecializacao() << ":\n";
    ot1->RealizaCirurgia();
    cout << endl;

    cout << of1->getEspecializacao() << ":\n";
    of1->RealizaCirurgia();
    cout << endl;

    return 0;
}
