#include <iostream>
using namespace std;
// 28. FUP que leia 10 números e verifique quantos destes números são negativos.

main() {
    system("chcp 65001");
    
    int numb[10],negativo = 0;
    for (int i = 0; i < 10; i++) {
    cout<<"informe um numero: ";
    cin>>numb[i];
    if (numb[i] < 0)
        negativo++;
    }
    cout<<negativo<<" foram negativos ";
    cout<<"\ntodos os números digitados foram\n";
    for(int i = 0; i <10;i++){
        cout<<numb[i]<<", ";
    }
}