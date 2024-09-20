#include <iostream>
using namespace std;

main() {
    system("chcp 65001");
    int resPositivo;
    bool res;
    cout<<"Digite 1 para sim e 0 para não\n Trocou mensagens com a vítima? ";
    cin>>res;
    if (res){resPositivo++;}
    cout<<" Esteve no local do crime? ";
    cin>>res;
    if (res){resPositivo++;}
    cout<<" É parente ou reside perto da vítima? ";
    cin>>res;
    if (res){resPositivo++;}
    cout<<" Devia algum valor para a vítima? ";
    cin>>res;
    if (res){resPositivo++;}
    cout<<" Trabalha ou trabalhou com a vítima? ";
    cin>>res;
    if (res){resPositivo++;}
    cout<<" Possui algum tipo de relacionamento amoroso com a vítima? ";
    cin>>res;
    if (res){resPositivo++;}
    cout<<" Ficou feliz pelo destino fatídico na vítima? ";
    cin>>res;
    if (res){resPositivo++;}
    cout<<" Possui algum tipo de arma de fogo? ";
    cin>>res;
    if (res){resPositivo++;}
    
    if (resPositivo == 4){
        cout<<"Suspeito do Crime";
    }else if (resPositivo >= 5 && resPositivo <= 7){
        cout<<"Possível Criminoso";
    }else if (resPositivo == 8 ){
        cout<<"Assassino";
    }else{
        cout<<"Inocente";
    }
    
    
}