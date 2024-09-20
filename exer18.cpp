#include <iostream>
using namespace std;

main() {
    system("chcp 65001");
    float valFabrica;
    cout<<"\tCalculadora Custo consumidor\nInforme o valor de fabrica do carro: ";
    cin>>valFabrica;
    float porCem = valFabrica/100;
    float valConsumidor = valFabrica + (porCem*28) + (porCem*45);
    cout<<"o valor para o consumidor é "<<valConsumidor; 
}