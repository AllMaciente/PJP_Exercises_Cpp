#include <iostream>
using namespace std;
// 25.FUP que solicite quantidade de pessoas, depois solicite a altura de cada uma e calcule a media da altura das pessoas;

main() {
    system("chcp 65001");
   int qtndPessoas;

   cout<<"Digite a Quantidade de Pessoas: ";
   cin>>qtndPessoas;
   
   
   float somaAlturaTodos = 0 ,altura[qtndPessoas];
   for (int i = 0; i < qtndPessoas; i++)
   {
    cout<<"Digite a altura da pessoa "<<i + 1<<": ";
    cin>>altura[i];
    somaAlturaTodos = somaAlturaTodos + altura[i];
   }
   system("cls");
    cout<<"A media de altura de vcs e "<<somaAlturaTodos/qtndPessoas;
    cout<<"\nAltura de todas as pessoas\n";
    for(int i = 0; i <qtndPessoas;i++){
        cout<<altura[i]<<", ";
    }
}