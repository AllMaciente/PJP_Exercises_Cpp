#include <iostream>
using namespace std;

main() {
    system("chcp 65001");
    int velPer,velMoto;
    cout<<"Informe a velocidade maxima da Via: ";
    cin>> velPer;
    cout<<"Informe a velocidade do motorista: ";
    cin>> velMoto;
    if (velMoto > velPer){
        if ((velMoto - velPer) < (velPer/100)*20){
            cout<<"Multa de R$102,00";
        }else{
            cout<<"Multa de R$500,00";
        }
    }else{
            cout<<"Sem Multa";
    }
    
}