#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){}

double RestauranteCaseiro::calculaTotalRestaurante(){
   double somaTotal = 0;
   for(int i = 0; i < MAX; i++){
        somaTotal += mesas[i].calculaTotal();
   }
   return somaTotal;
}

void RestauranteCaseiro::adicionaAoPedido(Pedido pedido, int mesa){
    mesas[mesa].adicionaAoPedido(pedido);
}

void RestauranteCaseiro::zeraPedidos(){
    int i;

    for(i = 0; i < MAX; i++){
        mesas[i].zeraPedidos();
    }
}
