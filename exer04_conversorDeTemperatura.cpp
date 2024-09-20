#include <iostream>
using namespace std;
// 4. FUP que leia uma temperatura em graus Celsius e apresente convertida em graus
// Fahrenheit. A fórmula de conversão é : F = (9*C+160)/5 Sendo F a temperatura em
// Fahrenheit e C a temperatura em Celsius.

main() {
    system("chcp 65001");
    
    float tempC;
    cout<<"Qual a temperatura Em Celsius: ";
    cin>>tempC;
    cout<<(9*tempC+160)/5<<"º Fahrenheit";
}