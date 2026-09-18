#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<endl<<"Podaj liczbe b: ";
    cin>>b;
    if (a>b){
        cout<<"Wieksza liczba to: "<<a;
    }
    else if (b>a){
        cout<<"Wieksza liczba to: "<<b;
    }
    else {
        cout<<"Liczby sa rowne";
    }
    return 0;
}