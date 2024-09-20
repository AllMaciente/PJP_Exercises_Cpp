#include <iostream>
using namespace std;
// > Desafio 2) FUP que leia dois números inteiros e imprima o maior deles.
main() {
    int A,B;
cout << "Digite o primeiro valor: ";
cin >> A;
cout << "\nDigite o segundo valor: ";
cin >> B;

if (A < B) {
    cout<<"\nO Valor de: "<<B<<" e o Maior";
}
else {
    cout<<"\nO Valor de: "<<A<<" e o Maior";
}

}