#include <iostream>
using namespace std;
bool czyParzysta(int liczba);
int main() {
    int liczba;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    if (czyParzysta(liczba)==0) {
        cout<<"Liczba jest parzysta";
    }
    else {
        cout<<"Liczba jest nieparzysta";
    }
}
bool czyParzysta(int liczba) {
    return liczba%2;
}