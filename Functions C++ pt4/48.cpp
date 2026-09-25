#include <iostream>
using namespace std;
int sumaCyfr(int liczba);
int main() {
    int liczba;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    cout<<"Suma cyfr: "<<sumaCyfr(liczba);
}
int sumaCyfr(int liczba) {
    int suma=0;
    liczba=abs(liczba);
    for (int i=liczba; i>0; i=i/10) {
        suma=suma+(i%10);
    }
    return suma;
}