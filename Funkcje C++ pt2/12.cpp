#include <iostream>
using namespace std;
double srednia(double a, double b);
int main(){
    double a,b;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    cout<<"Srednia arytmetyczna tych liczb to: "<<srednia(a,b);
}
double srednia(double a, double b){
    double suma=a+b;
    return suma/2;
}