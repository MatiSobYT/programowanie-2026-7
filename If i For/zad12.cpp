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
        int licznik=1;
        for (int i=n; i>10; i=i/10) {
            licznik++;
        }
        cout<<"Liczba cyfr: "<<licznik;
    }
}