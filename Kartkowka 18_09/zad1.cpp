#include <iostream>
using namespace std;
int main() {
    int a,b,suma=0;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    if (a<b) {
        for (int i=a+1; i<b; i++) {
            suma=suma+i;
        }
        cout<<"Suma liczb pomiedzy to: "<<suma;
    }
    else if (b<a) {
        for (int i=b+1; i<a; i++) {
            suma=suma+i;
        }
        cout<<"Suma liczb pomiedzy to: "<<suma;
    }
    else {
        cout<<"Liczby sa rowne sobie";
    }
    return 0;
}