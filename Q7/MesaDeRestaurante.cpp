#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){
    Pedido pedido = Pedido();
    for(int i = 0; i < MAX; i++){
        pedidos[i].setPedido(pedido);
    }
}

void MesaDeRestaurante::adicionaAoPedido(Pedido pedido){
    int x = 0, i = 0;
    while(pedidos[i].getNumeroPedido()){
        if(!strcmp(pedido.getDescricaoPedido(), pedidos[i].getDescricaoPedido())){
            pedidos[i].setQuantidade(pedidos[i].getQuantidade() +1);
            x = 1;
            i++;
        }
    }if(x)
        pedidos[i].setPedido(pedido);
}

double MesaDeRestaurante::calculaTotal(){
    double soma = 0;
    int i = 0;

    while(pedidos[i].getNumeroPedido()){
        soma += pedidos[i].getPreco() * pedidos[i].getQuantidade();
        i++;
    }
    return soma;
}

void MesaDeRestaurante::zeraPedidos(){
    int i = 0;
    Pedido pedido = Pedido();
    while(!(pedidos[i].getNumeroPedido() == 0)){
        pedidos[i].setPedido(pedido);
    }

}
