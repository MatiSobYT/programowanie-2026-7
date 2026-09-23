#include <iostream>
using namespace std;
double cenaPoRabacie(double cena, double rabat);
int main(){
    double cena, rabat, poRabacie1;
    cout<<"Podaj cene: ";
    cin>>cena;
    cout<<"Podaj pierwszy rabat: ";
    cin>>rabat;
    poRabacie1=cenaPoRabacie(cena, rabat);
    cout<<"Podaj drugi rabat: ";
    cin>>rabat;
    cout<<"Cena koncowa: "<<cenaPoRabacie(poRabacie1, rabat);
}
double cenaPoRabacie(double cena, double rabat){
    return cena-(cena*(rabat/100));
}