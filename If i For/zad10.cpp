#include <iostream>
using namespace std;
int main() {
    int n=1;
    int liczba=0, suma=0, srednia=0;
    while (n!=0) {
        cout<<"Podaj liczbe: ";
        cin>>n;
        if (n==0) {
            break;
        }
        else {
            liczba++;
            suma=suma+n;
        }
    }
    srednia=suma/liczba;
    cout<<"Liczba liczb: "<<liczba<<endl<<"Suma: "<<suma<<endl<<"Srednia: "<<srednia;
}