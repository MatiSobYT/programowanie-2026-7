#include <iostream>
using namespace std;
double procent(double zdobyte, double wszystkie);
int main(){
    double zdobyte,wszystkie;
    cout<<"Podaj liczbe zdobytych punktow: ";
    cin>>zdobyte;
    cout<<"Podaj liczbe wszystkich punktow: ";
    cin>>wszystkie;
    cout<<"Wynik: "<<procent(zdobyte,wszystkie)<<"%";
}
double procent(double zdobyte, double wszystkie){
    double wynik=zdobyte/wszystkie;
    return wynik*100;
}