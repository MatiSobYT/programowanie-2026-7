//bez bonusow bo po uj
#include <iostream>
using namespace std;
int main(){
    int n,licznik=0;
    cout<<"Podaj liczbe: ";
    cin>>n;
    for (int i=2; i<n; i++) {
    if (n%i==0) {
        licznik++;
    }
    else {
        licznik=licznik;
    }
    }
    if (licznik==0) {
        cout<<"Liczba jest pierwsza";
    }
    else {
        cout<<"Liczba nie jest pierwsza";
    }
}