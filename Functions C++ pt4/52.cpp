#include <iostream>
using namespace std;
double srednia(int suma, int liczba);
int minimum(int a, int b, int c, int d, int e);
int maksimum(int a, int b, int c, int d, int e);
int main() {
    int a,b,c,d,e,suma=0;
    cout<<"Podaj piec ocen: ";
    cin>>a>>b>>c>>d>>e;
    suma=a+b+c+d+e;
    cout<<"Srednia: "<<srednia(suma,5)<<endl;
    cout<<"Najmniejsza ocena: "<<minimum(a,b,c,d,e)<<endl;
    cout<<"Najwieksza ocena: "<<maksimum(a,b,c,d,e);
}
double srednia(int suma, int liczba) {
    return suma/liczba;
}
int minimum(int a, int b, int c, int d, int e) {
    int min=INT32_MAX;
    if (min>a) {
        min=a;
    }
    if (min>b) {
        min=b;
    }
    if (min>c) {
        min=c;
    }
    if (min>d) {
        min=d;
    }
    if (min>e) {
        min=e;
    }
    return min;
}
int maksimum(int a, int b, int c, int d, int e) {
    int max=0;
    if (max<a) {
        max=a;
    }
    if (max<b) {
        max=b;
    }
    if (max<c) {
        max=c;
    }
    if (max<d) {
        max=d;
    }
    if (max<e) {
        max=e;
    }
    return max;
}