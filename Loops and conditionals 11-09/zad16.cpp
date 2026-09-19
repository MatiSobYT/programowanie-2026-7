//no bonus for you bitch
#include <iostream>
using namespace std;
int main(){
    int liczba;
    int suma=0;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    for(int i=1; i<liczba; i++){
        if(liczba%i==0){
            suma=suma+i;
        };
    }
    if(suma==liczba){
        cout<<"Liczba jest doskonala";
    }
    else{
        cout<<"Liczba nie jest doskonala";
    }
}