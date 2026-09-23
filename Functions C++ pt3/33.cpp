#include <iostream>
using namespace std;
double kosztZakupow(double cena, int liczba);
int main(){
    int liczba;
    double cena;
    cout<<"Podaj cene produktu: ";
    cin>>cena;
    cout<<"Ile sztuk: ";
    cin>>liczba;
    if(kosztZakupow(cena, liczba)>200){
        cout<<"Cena: "<<kosztZakupow(cena, liczba)<<endl;
        cout<<"Cena po rabacie: "<<kosztZakupow(cena, liczba)*0.9;
    }
    else{
        cout<<"Cena: "<<kosztZakupow(cena, liczba);
    }
}
double kosztZakupow(double cena, int liczba){
    return cena*liczba;
}