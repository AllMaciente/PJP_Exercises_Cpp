#include <iostream>
using namespace std;
// 23. FUP que solicite um numero e escreva "Batata" enquanto o usuario digita 1;


main() {
    system("chcp 65001");

    int numb;
    do{
        if (numb == 1){ 
    cout<<"Batata";   
        }
        
        cout<<"Digite um numero: ";
        cin>>numb;
    } while (numb == 1);

}