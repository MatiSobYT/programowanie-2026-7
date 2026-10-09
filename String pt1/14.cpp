#include <iostream>
#include <string>
using namespace std;
int main() {
    string zdanie, wynik;
    int poczatek=0;
    cout<<"Podaj zdanie: ";
    getline(cin, zdanie);
    for (int i=0; i<zdanie.length(); i++) {
        if (zdanie[i]==' ') {
            for (int j=i-1; j>=poczatek; j--) {
                wynik.push_back(zdanie[j]);
            }
            wynik.push_back(' ');
            poczatek=i+1;
        }
    }
    for (int j=zdanie.length()-1; j>=poczatek; j--) {
        wynik.push_back(zdanie[j]);
    }
    cout<<"Odwrocone wyrazy: "<<wynik;
}