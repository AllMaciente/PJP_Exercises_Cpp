#include <iostream>
using namespace std;
// 10. FUP que calcule o IMC -solicite se é H ou M e faça o calculo;
//para homens: (72.7*h)-58
//para mulheres: (62.1*h)-44.7

main() {
float altura;
char gen;
cout<<"Vc é [H]homens [M]mulheres: ";
cin>>gen;
cout<<"Qual a sua altura: ";
cin>>altura;
if (gen == 'H' || gen == 'h'){
    cout<<"seu IMC = "<<(72.7*altura)-58;
} else if (gen == 'M' || gen == 'm'){
    cout<<"seu IMC = "<<(62.1*altura)-44.7;
}

}