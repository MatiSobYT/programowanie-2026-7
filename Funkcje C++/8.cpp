#include <iostream>
using namespace std;
double celsjuszNaFahrenheit(double c);
int main(){
    double c;
    cout<<"Podaj stopnie C: ";
    cin>>c;
    cout<<"Stopnie F: "<<celsjuszNaFahrenheit(c);
}
double celsjuszNaFahrenheit(double c){
    return c*9/5+32;
}