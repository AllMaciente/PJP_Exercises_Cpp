#include <iostream>
using namespace std;
// 27. FUP que calcule o peso de um elevador, onde cada pessoa que entra informa o 
// peso, caso atinga 180KG, o elevador informa que esta no peso máximo;

main() {
    system("chcp 65001");
    float soma,peso[6];
    int pessoa = 0;
    do{
        cout<<"Informe seu peso: ";
        cin>>peso[pessoa];
        soma = soma + peso[pessoa];
        pessoa++;
    } while (soma < 180);
    cout<<"o elevador esta na sua capacidade maxima\nOs Pesos = ";
    for(int i = 0; i <5;i++){
        cout<<peso[i]<<", ";
    }
    cout<<soma;
}