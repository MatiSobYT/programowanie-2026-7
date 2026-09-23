#include <iostream>
using namespace std;
double pensjaNetto(double pensja, double procent);
int main(){
    double pensja, procent;
    cout<<"Podaj pensje: ";
    cin>>pensja;
    cout<<"Podaj % podatku: ";
    cin>>procent;
    cout<<"Pensja netto: "<<pensjaNetto(pensja, procent);
}
double pensjaNetto(double pensja, double procent){
    double podatek=pensja*(procent/100);
    return pensja-podatek;
}