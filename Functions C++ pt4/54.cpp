#include <iostream>
using namespace std;
double dodaj(double a, double b);
double odejmij(double a, double b);
double pomnoz(double a, double b);
double podziel(double a, double b);
int main() {
    int a,b,n;
    cout<<"1 - Dodawanie"<<endl<<"2 - Odejmowanie"<<endl<<"3 - Mnozenie"<<endl<<"4 - Dzielenie"<<endl<<"Twoj wybor: ";
    cin>>n;
    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;
    if (n==1) {
        cout<<"Wynik: "<<dodaj(a,b);
    }
    if (n==2) {
        cout<<"Wynik: "<<odejmij(a,b);
    }
    if (n==3) {
        cout<<"Wynik: "<<pomnoz(a,b);
    }
    if (n==4) {
        if (b==0) {
            cout<<"Nie mozna dzielic przez 0";
        }
        else {
            cout<<"Wynik: "<<podziel(a,b);
        }
    }
}
double dodaj(double a, double b) {
    return a+b;
}
double odejmij(double a, double b) {
    return a-b;
}
double pomnoz(double a, double b) {
    return a*b;
}
double podziel(double a, double b) {
    return a/b;
}