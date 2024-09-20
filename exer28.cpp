#include <iostream>
using namespace std;
// 28. FUP que leia 10 números e verifique quantos destes números são negativos.

main() {
    system("chcp 65001");
    
    int numb,negativo,positivo = 0;
    for (int i = 0; i < 10; i++) {
    cout<<"informe um numero: ";
    cin>>numb;
    if (numb < 0)
        negativo++;
    else
        positivo++;
    }
    cout<<positivo<<" foram positivos ";
    cout<<negativo<<" foram negativos ";
}