#include <iostream>
using namespace std;
// 6. FUP que solicite a duração de um evento em segundos e imprima em horas, minutos e segundos;
main() {
    float segundos,minutos;
    cout<<"Quanto tempo Dura o evento (Segundos): ";
    cin>>segundos;
    minutos = segundos/60;
    cout<<"\n\tHoras: "<<minutos/60<<"\n\tminutos: "<<minutos<<"\n\tSegundos: "<<segundos;
}