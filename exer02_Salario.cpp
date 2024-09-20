#include <iostream>
using namespace std;
// 2. FUP que leia o valor da hora do trabalhador e a quantidade de horas trabalhadas.
//         Imprima o valor que o trabalhador deverá receber ao final do mês.;

// Salario
main() {
    system("chcp 65001");
    float valorHora,horaTrabalhada;
    cout<<"Qual o valor da hora do trabalhado: ";
    cin>>valorHora;
    cout<<"\nQuantas horas trabalhadas: ";
    cin>>horaTrabalhada;
    cout<<"\nO trabalhador devera receber R$:"<<valorHora*horaTrabalhada;
}