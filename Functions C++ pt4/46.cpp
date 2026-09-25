#include <iostream>
using namespace std;
int sumaDoN(int n);
int main() {
    int n;
    cout<<"Podaj n: ";
    cin>>n;
    cout<<"Suma: "<<sumaDoN(n);
}
int sumaDoN(int n) {
    if (n<1) {
        return 0;
    }
    else {
        int suma=0;
        for (int i=1; i<=n; i++) {
            suma=suma+i;
        }
        return suma;
    }
}