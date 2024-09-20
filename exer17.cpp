#include <iostream>
using namespace std;
// 17. FUP que leia as 3 notas de um aluno e calcule a média final deste aluno. 
// Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.
//  - media ponderada

main() {
    system("chcp 65001");
    float nota1,nota2,nota3;
    cout<<"\tCalculadora de media\nInforme a primeira nota: ";
    cin>>nota1;
    cout<<"Informe a Segunda nota: ";
    cin>>nota2;
    cout<<"Informe a Terceira nota: ";
    cin>>nota3;
    cout<<"A media ponderada do alune é "<<(nota1*2+nota2*3+nota3*5)/(2+3+5);
}