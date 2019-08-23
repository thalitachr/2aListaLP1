#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#define MAX 255

class MesaDeRestaurante{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido pedido);
        void zeraPedidos();
        double calculaTotal();

    private:
        Pedido pedidos[MAX];
        int c;

};

#endif // MESADERESTAURANTE_H
