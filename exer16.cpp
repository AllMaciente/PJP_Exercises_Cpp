#include <iostream>
using namespace std;
// 16. FUP que calcule o imposto de renda de um contribuinte. 
// Os dados de entrada são: o CPF(int), o número de dependentes e a renda mensal. 
// Para cada dependente será feito um desconto de 5% do salário mínimo por dependente. 
// Os valores da alíquota para cálculo do imposto são:

main() {
    system("chcp 65001");
    double cpf,rendaMensal,nDependentes;
    cout<<"\tCalculadora de imposto de renda\nInforme o CPF: ";
    cin>>cpf;
    cout<<"\tInforme o numero de dependentes: ";
    cin>>nDependentes;
    cout<<"Informe o renda mensal: ";
    cin>>rendaMensal;
    rendaMensal = (rendaMensal/100)*(5*nDependentes)
    int salariomin = 1412 ;
    if (rendaMensal <= 2*salariomin){
        cout<<"Isento";
    }else if (2*salariomin < rendaMensal && rendaMensal <= 3*salariomin){
        cout<<(rendaMensal/100)*5;
    }else if (3*salariomin < rendaMensal && rendaMensal <= 5*salariomin){
        cout<<(rendaMensal/100)*10;
    }else if (5*salariomin < rendaMensal && rendaMensal <= 7*salariomin){
        cout<<(rendaMensal/100)*15;
    }else if (rendaMensal > 7*salariomin){
        cout<<(rendaMensal/100)*20;
    }
    
    
}