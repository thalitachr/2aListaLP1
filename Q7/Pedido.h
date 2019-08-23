#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
#include <iostream>

class Pedido{
    public:
        Pedido();
        Pedido(int numeroPedido, std::string descricaoPedido, int quantidade, double preco);
        void setPedido(Pedido pedido);
        int getNumeroPedido();
        std::string getDescricaoPedido();
        int getQuantidade();
        double getPreco();

    private:
        int numeroPedido;
        std::string descricaoPedido;
        int quantidade;
        double preco;
};

#endif // PEDIDO_H
