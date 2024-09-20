#include <iostream>
using namespace std;
// 24. FUP que imprima a tabuada de um numero de 0 a 10;

main() {
    system("chcp 65001");
    int numb;
    cout<<"Digite um numero para tabuada: ";
    cin>>numb;

    for (int i = 0; i < 11; i++)
    {
        cout<<"\n"<<numb<<" * "<<i<<" = "<<numb * i;
    }
    
}