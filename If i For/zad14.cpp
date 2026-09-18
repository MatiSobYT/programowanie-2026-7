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
        int iloczyn=1;
        int liczba;
        while (n>0) {
            liczba=n%10;
            iloczyn=iloczyn*liczba;
            n=n/10;
        }
        cout<<"Iloczyn cyfr: "<<iloczyn;
    }
}