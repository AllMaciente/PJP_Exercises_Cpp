#include <iostream>
using namespace std;

main() {
    system("chcp 65001");
    float IPI;
    cout<<"Informe o IPI: ";
    cin>>IPI;
    string peca[10] = {"Tests 1","Tests 2","Tests 3","Tests 4"};

    int codPeca1,valPeca1,quanPeca1;

    cout<<"informe o código da peça 1:";
    cin>>codPeca1;
    cout<<"peça selecionada "<<peca[codPeca1]<<"\n";
    cout<<"informe o valor unitário da peça 1:";
    cin>> valPeca1;
    cout<<"informe o Quantidade da peça 1:";
    cin>> quanPeca1;
    float codPeca2,valPeca2,quanPeca2;
    cout<<"informe o código da peça 2:";
    cin>>codPeca2;
    cout<<"informe o valor unitário da peça 2:";
    cin>>valPeca2;
    cout<<"informe o Quantidade da peça 2:";
    cin>>quanPeca2;
    float valorTotal = (valPeca1*quanPeca1 + valPeca2*quanPeca2)*(IPI/100 + 1);
    cout<<"Valor final: "<<valorTotal;
}