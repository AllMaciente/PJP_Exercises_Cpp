#include <iostream>
using namespace std;
// 27. FUP que calcule o peso de um elevador, onde cada pessoa que entra informa o 
// peso, caso atinga 180KG, o elevador informa que esta no peso maximo;

main() {
    system("chcp 65001");
    float soma,temp;
    do
    {
        cout<<"Informe seu peso: ";
        cin>>temp;
        soma = soma + temp;
    } while (soma < 180);
    cout<<"o elevador esta na sua capacidade maxima";
}