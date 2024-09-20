#include <iostream>
using namespace std;
// 25.FUP que solicite quantidade de pessoas, depois solicite a altura de cada uma e calcule a media da altura das pessoas;

main() {
    system("chcp 65001");
   int quantidadePessoas;
   float somaAlturaTodos = 0 ,altura;

   cout<<"Digite a Quantidade de Pessoas: ";
   cin>>quantidadePessoas;
   for (int i = 1; i <= quantidadePessoas; i++)
   {
    cout<<"Digite a altura da pessoa "<<i<<": ";
    cin>>altura;
    somaAlturaTodos = somaAlturaTodos + altura;
   }
    cout<<"A media de altura de vcs e "<<somaAlturaTodos/quantidadePessoas;
}