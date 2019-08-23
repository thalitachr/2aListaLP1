#include "Pedido.h"

Pedido::Pedido(int numeroPedido, std::string descricaoPedido, int quantidade, double preco){
    this->numeroPedido = numeroPedido;
    this->descricaoPedido = descricaoPedido;
    this->quantidade = quantidade;
    this->preco = preco;
}

Pedido::Pedido(){
    this->numeroPedido = 0;
    this->descricaoPedido = " ";
    this->quantidade = 0;
    this->preco = 0;
}

void Pedido::setPedido(Pedido pedido){
    this->numeroPedido = pedido.getNumeroPedido();
    this->descricaoPedido = pedido.getDescricaoPedido();
    this->quantidade = pedido.getQuantidade();
    this->preco = pedido.getPreco();
}

int Pedido::getNumeroPedido(){
    return numeroPedido;
}

std::string Pedido::getDescricaoPedido(){
    return descricaoPedido;
}

int Pedido::getQuantidade(){
    return quantidade;
}

double Pedido::getPreco(){
    return preco;
}
