#include <iostream>
using namespace std;
// 26.FUP que solicite o peso de 5 pessoas e calcule a media; Imprima o resultado;
main() {
    system("chcp 65001");
    int soma,temp;
    for (int i = 1; i < 6; i++)
    {
        cout<<"Digite a peso da "<<i<<"º pessoa: ";
        cin>>temp;
        soma = soma+temp;
    }
    cout<<"a media de peso de vcs é "<<soma/5;
}