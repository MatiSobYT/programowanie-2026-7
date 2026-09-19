#include <iostream>
using namespace std;
double cenaBrutto(double cenaNetto, double vat);
int main(){
    double cenaNetto,vat;
    cout<<"Cena netto: ";
    cin>>cenaNetto;
    cout<<"VAT: ";
    cin>>vat;
    cout<<"Cena brutto: "<<cenaBrutto(cenaNetto, vat);
}
double cenaBrutto(double cenaNetto, double vat){
    vat=vat/100;
    double podatek=cenaNetto*vat;
    return cenaNetto+podatek;
}