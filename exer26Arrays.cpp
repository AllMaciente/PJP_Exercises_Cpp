#include <iostream>
using namespace std;
// 26.FUP que solicite o peso de 5 pessoas e calcule a media; Imprima o resultado;
main() {
    system("chcp 65001");
    int soma,peso[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Digite a peso da "<<i+1<<"º pessoa: ";
        cin>>peso[i];
        soma = soma+peso[i];
    }
    cout<<"a media de peso de vcs é "<<soma/5;
    cout<<"\nPeso de todas as pessoas\n";
    for(int i = 0; i <5;i++){
        cout<<peso[i]<<", ";
    }

}