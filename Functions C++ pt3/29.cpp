#include <iostream>
using namespace std;
double kosztPrzejazdu(double kilometry, double spalanie, double cenaPaliwa);
int main(){
    double kilometry, spalanie, cenaPaliwa;
    cout<<"Podaj dystans w km: ";
    cin>>kilometry;
    cout<<"Podaj spalanie w L/100km: ";
    cin>>spalanie;
    cout<<"Podaj cene paliwa/L: ";
    cin>>cenaPaliwa;
    cout<<"Koszt podrozy: "<<kosztPrzejazdu(kilometry, spalanie, cenaPaliwa);
}
double kosztPrzejazdu(double kilometry, double spalanie, double cenaPaliwa){
    double spalone=kilometry*(spalanie/100);
    return spalone*cenaPaliwa;
}