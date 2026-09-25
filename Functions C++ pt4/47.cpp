#include <iostream>
using namespace std;
int liczbaCyfr(int liczba);
int main() {
    int liczba;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    cout<<"Liczba cyfr: "<<liczbaCyfr(liczba);
}
int liczbaCyfr(int liczba) {
    int lcyfr=1;
    liczba=abs(liczba);
    for (int i=liczba; i>=10; i=i/10) {
        lcyfr++;
    }
    return lcyfr;
}