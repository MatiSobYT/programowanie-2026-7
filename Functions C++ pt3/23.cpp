#include <iostream>
using namespace std;
int wartoscBezwzgledna(int liczba);
int main(){
    int liczba;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    cout<<"Wartosc bezwzgledna tej liczby: "<<wartoscBezwzgledna(liczba);
}
int wartoscBezwzgledna(int liczba){
    if(liczba>=0){
        return liczba;
    }
    else{
        return -liczba;
    }
}