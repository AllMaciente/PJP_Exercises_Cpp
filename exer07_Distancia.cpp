#include <iostream>
using namespace std;
// 7. FUP que leia um valor em quilômetros e converta para metros e centímetros;

main() {
    float km,m;
    cout<<"Qual a distancia (km): ";
    cin>>km;
    m = km*1000;
    cout<<"\n\tQuilômetros: "<<km<<"\n\tMetros: "<<m<<"\n\tCentímetros: "<<m*100;
}