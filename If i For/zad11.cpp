#include <iostream>
using namespace std;
int main() {
    int n;
    int silnia=1;
    cout<<"Podaj liczbe: ";
    cin>>n;
    for (int i=2; i<=n; i++) {
        silnia=silnia*i;
    }
    cout<<"Silnia to: "<<silnia;
}