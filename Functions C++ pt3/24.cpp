#include <iostream>
using namespace std;
double podatek(double pensja, double procent);
int main(){
    double pensja, procent;
    cout<<"Podaj pensje: ";
    cin>>pensja;
    cout<<"Podaj % podatku: ";
    cin>>procent;
    cout<<"Kwota podatku: "<<podatek(pensja, procent);
}
double podatek(double pensja, double procent){
    return pensja*(procent/100);
}