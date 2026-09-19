#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Podaj dodatnia liczbe calkowita: ";
    cin>>n;
    if (n<=0) {
        cout<<"Bledne dane";
    }
    else {
        int suma=0;
        for (int i=n; i>10; i=i/10) {
            suma=suma+i%10;
            n=n/10;
        }
        if (n==10) {
            suma=suma+1;
            cout<<"Suma cyfr: "<<suma;
        }
        else {
            suma=suma+n;
            cout<<"Suma cyfr: "<<suma;
        }
    }
}