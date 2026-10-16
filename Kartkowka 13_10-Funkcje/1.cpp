#include <iostream>
using namespace std;
bool czy_doskonala(int n);
int main() {
    int n;
    cout<<"Podaj n: ";
    cin>>n;
    if (czy_doskonala(n)==true) {
        cout<<"Liczba jest doskonala";
    }
    else {
        cout<<"Liczba nie jest doskonala";
    }
}

bool czy_doskonala(int n) {
    int suma=0;
    for (int i=1; i<n; i++) {
        if (n%i==0) {
            suma+=i;
        }
    }
    if (suma==n) {
        return true;
    }
    else {
        return false;
    }
}   