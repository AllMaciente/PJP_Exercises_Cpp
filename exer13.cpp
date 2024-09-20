#include <iostream>
using namespace std;
// >Extra Desafio 1. FUP que leia um número inteiro e verifique se ele é par ou ímpar, imprimindo
// uma mensagem correspondente.
main() {
    int numb;
    cout<<"informe um numero inteiro: ";
    cin>>numb;
    if (numb % 2)
    {
        cout<<"\n"<<numb<<" e ímpar";
    }
    else
    {
        cout<<"\n"<<numb<<" e Par";
    }
    
    
}