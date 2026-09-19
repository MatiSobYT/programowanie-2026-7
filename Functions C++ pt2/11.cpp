#include <iostream>
using namespace std;
double kieszonkoweNaDzien(double kwota, int dni);
int main(){
    double kwota;
    int dni;
    cout<<"Kwota: ";
    cin>>kwota;
    cout<<"Dni: ";
    cin>>dni;
    cout<<"Srednia wyplata dzienna: "<<kieszonkoweNaDzien(kwota, dni);
}
double kieszonkoweNaDzien(double kwota, int dni){
    return kwota/dni;
}