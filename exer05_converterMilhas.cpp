#include <iostream>
using namespace std;
// 5. FUP que solicite a quantidade de milhas e converta para quilômetros (1milha = 1.60934kms);
main() {
   system("chcp 65001");
    int milhas;
    cout<<"Quantas milhas para a conversão: ";
    cin>>milhas;
    cout<<"\n"<<milhas*1.60934<<" kms";
}