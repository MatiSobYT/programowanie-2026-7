#include <iostream>
using namespace std;
int suma(int a, int b);
int main() {
    int a,b;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Suma: "<<suma(a,b);
}
int suma(int a, int b) {
    return a+b;
}