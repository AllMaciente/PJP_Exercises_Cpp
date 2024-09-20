#include <iostream>
using namespace std;
// 15. FUP que leia 3 valores a,b,c e verifique se eles formam ou não um triângulo.
// Caso os valores formem um triângulo, solicite a base e a altura, calcule (base * altura / 2) 
// e escreva a área deste triângulo. Se não formam triângulo escreva os valores lidos. 

main() {
    system("chcp 65001");
    float ladoA,ladoB,ladoC;
    cout<<"\tCalculo de triangulo\nDigite o tamanho do primeiro lado: ";
    cin>>ladoA;
    cout<<"Digite o tamanho do segundo lado: ";
    cin>>ladoB;
    cout<<"Digite o tamanho do terceiro lado: ";
    cin>>ladoC;

    if (ladoA < ladoB + ladoC&&ladoB < ladoC + ladoA&&ladoC < ladoB + ladoA)
    {
        float base,altura;
        cout<<"informe a base do triangulo: ";
        cin>>base;    
        cout<<"informe a altura do triangulo: ";
        cin>>altura;
        cout<<"A area do triangulo é: "<<(base*altura)/2;    
    }else
    {
     cout<<"Os valores digitados nao formão um triangulo";
    }
    
    

}