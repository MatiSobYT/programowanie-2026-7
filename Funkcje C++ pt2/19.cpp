#include <iostream>
using namespace std;
int dniNaGodziny(int dni);
int main(){
    int dni;
    cout<<"Ile dni: ";
    cin>>dni;
    cout<<"Tyle godzin: "<<dniNaGodziny(dni);
}
int dniNaGodziny(int dni){
    return dni*24;
}