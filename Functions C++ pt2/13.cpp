#include <iostream>
using namespace std;
double srednia3(double a, double b, double c);
int main(){
    double a,b,c;
    cout<<"Pierwsza liczba: ";
    cin>>a;
    cout<<"Druga liczba: ";
    cin>>b;
    cout<<"Trzecia liczba: ";
    cin>>c;
    cout<<"Srednia tych liczb to: "<<srednia3(a,b,c);
}
double srednia3(double a, double b, double c){
    double suma=a+b+c;
    return suma/3;
}