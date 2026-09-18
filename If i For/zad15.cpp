#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Podaj dodatnia liczbe calkowita: ";
    cin>>n;
    if (n<1) {
        cout<<"Bledne dane";
    }
    else {
        int liczba;
        int biggest=0;
        while (n>0) {
            liczba=n%10;
            n=n/10;
            if (liczba>biggest) {
                biggest=liczba;
            }
        }
        cout<<"Najwieksza cyfra: "<<biggest;
    }
}