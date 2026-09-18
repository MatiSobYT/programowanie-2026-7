#include <iostream>
using namespace std;
int poleProstokata(int a, int b);
int main() {
    int a,b;
    cout<<"Podaj dlugosc: ";
    cin>>a;
    cout<<"Podaj szerokosc: ";
    cin>>b;
    cout<<"Pole: "<<poleProstokata(a,b);
    return 0;
}
int poleProstokata(int a, int b) {
    return a*b;
}