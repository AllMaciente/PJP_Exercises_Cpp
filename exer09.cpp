#include <iostream>
using namespace std;
// 9. FUP que calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média, 
// uma mensagem de "Aprovado", caso a média seja igual ou superior a 7, a mensagem "Recuperação",
//  caso a média se igual ou superior a 5 e inferior a 7, ou a mensagem “Reprovado”, caso a média
//  seja inferior a 5.
main() {
    system("chcp 65001");
    float nota1, nota2, nota3,media;
    cout<<"Digite nota 1: ";
    cin>>nota1;
    
    cout<<"Digite nota 2: ";
    cin>>nota2;
    
    cout<<"Digite nota 3: ";
    cin>>nota3;

    cout<<" : ";
    media = (nota1+nota2+nota3)/3;
    if (media >= 7){
        cout<<"Aprovado";
    }else if (media >= 5){
        cout<<"Recuperação";
    }else {
        cout<<"Reprovado";
    }
    
    
    

}