#include <iostream>
using namespace std;
// 11.FUP que solicite a operação (+,-,/,*) e dois números, calcule a operação solicitada e informe o resultado;
main() {
    system("chcp 65001");
    char operacao;
    float numb1,numb2;
    cout<<"Qual o valor do numero 1: ";
    cin>>numb1;
    cout<<"Qual o valor do numero 2: ";
    cin>>numb2;
    cout<<"Qual a operação (+,-,*,/): ";
    cin>>operacao;
    if (operacao == '+') {
        cout<<numb1<<" + "<<numb2<<" = "<<numb1 + numb2;
    }else if (operacao == '-') {
        cout<<numb1<<" - "<<numb2<<" = "<<numb1 - numb2;
    }else if (operacao == '*') {
        cout<<numb1<<" * "<<numb2<<" = "<<numb1 * numb2;
    }else if (operacao == '/'){
        cout<<numb1<<" / "<<numb2<<" = "<<numb1 / numb2;
    }else{
        cout<<"o operador informado não e valido";
    }
    
    
    
    
    
}