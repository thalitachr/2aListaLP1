#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

int main(){
    RestauranteCaseiro restaurante1 = RestauranteCaseiro();
    MesaDeRestaurante mesa1 = MesaDeRestaurante();
    int i, quantidade, numero;
    float preco;
    std::string descricao;

    std::cout << "Digite o numero da mesa: ";
    std::cin >> i;
    std::cout << "Digite o numero do pedido: ";
    std::cin >> numero;
    std::cout << "Digite o preco do prato: ";
    std::cin >> preco;
    std::cout << "Digite a descricao do prato: ";
    std::cin >> descricao;
    std::cout << "Digite a quantidade: ";
    std::cin >> quantidade;

    Pedido pedido1 = Pedido(numero, descricao, quantidade, preco);

    restaurante1.adicionaAoPedido(pedido1, i);
    std::cout << "Total do restaurante: R$" << restaurante1.calculaTotalRestaurante() << std::endl;
    restaurante1.zeraPedidos();
}
