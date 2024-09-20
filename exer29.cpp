#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int list[15];
    for(int i=0 ; i<15 ; i++){
        srand(time(0)*(i+2));
        list[i] = 1+rand()%10; 
	}
    cout<<"[ ";
    for(int i=0 ; i<15 ; i++){
        cout<<list[i]<<", ";
	}
    cout<<" ]";
    }