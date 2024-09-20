#include <iostream>
using namespace std;
// 3. FUP que solicite o peso de 5 pessoas e calcule a media; Imprima o resultado;
main() {
    system("chcp 65001");
    cout<<"\n\tCalculadora de media de peso de 5 pessoas\n";
    float pessoa1,pessoa2,pessoa3,pessoa4,pessoa5;
    cout<<"Peso da pessoa Nº1: ";
    cin>>pessoa1;    
    cout<<"\nPeso da pessoa Nº2: ";
    cin>>pessoa2;    
    cout<<"\nPeso da pessoa Nº3: ";
    cin>>pessoa3;    
    cout<<"\nPeso da pessoa Nº4: ";
    cin>>pessoa4;    
    cout<<"\nPeso da pessoa Nº5: ";
    cin>>pessoa5; 
    cout<<"\n A media de peso das cinco pessoas: "<<(pessoa1+pessoa2+pessoa3+pessoa4+pessoa5)/5;
}