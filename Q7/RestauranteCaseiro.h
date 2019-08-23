#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(Pedido pedido, int mesa);
        double calculaTotalRestaurante();
        void zeraPedidos();

    private:
        MesaDeRestaurante mesas[MAX];
};

#endif // RESTAURANTECASEIRO_H
