#include <iostream>
#include <string>
using namespace std;
int main() {
    int dlugosc=0, temp=0, poczatek=0;
    char s;
    string zdanie, lng;
    cout<<"Napisz zdanie: ";
    getline(cin, zdanie);
    for (int i=0; i<=zdanie.length(); i++) {
        if (zdanie[i]==' ' || i==zdanie.length()) {
            temp=i-poczatek;
                if (temp>=dlugosc) {
                lng="";
                for (int j=poczatek; j<i; j++) {
                    lng.push_back(zdanie[j]);
                }
                dlugosc=temp;
            }
            poczatek=i+1;
        }
    }
    cout<<"Dlugosc najdluzszego wyrazu: "<<dlugosc<<endl<<"Najdluzszy wyraz: "<<lng;
}