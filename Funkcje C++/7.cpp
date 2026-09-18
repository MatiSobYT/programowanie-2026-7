#include <iostream>
using namespace std;
int szescian(int a);
int main() {
    int a;
    cout<<"Podaj liczbe: ";
    cin>>a;
    cout<<"Szescian: "<<szescian(a);
}
int szescian(int a) {
    return a*a*a;
}
