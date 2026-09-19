#include <iostream>
using namespace std;
int wieksza(int a, int b);
int main() {
    int a,b;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    cout<<"Wieksza liczba: "<<wieksza(a,b);
}
int wieksza(int a, int b) {
    if (a>b) {
        return a;
    }
    else if (b>a) {
        return b;
    }
    else {
        return a+b;
    }
}