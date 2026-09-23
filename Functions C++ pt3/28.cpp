#include <iostream>
using namespace std;
double brakuje(double cena, double pieniadze);
int main(){
    double cena, pieniadze;
    cout<<"Podaj cene: ";
    cin>>cena;
    cout<<"Podaj stan konta: ";
    cin>>pieniadze;
    cout<<"Brakuje: "<<brakuje(cena, pieniadze);
}
double brakuje(double cena, double pieniadze){
    if(pieniadze>cena){
        return 0;
    }
    else{
        return cena-pieniadze;
    }
}