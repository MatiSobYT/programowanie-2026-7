#include <iostream>
#include <string>
using namespace std;
int main(){
    string n1, n2, n3;
    int d1, d2, d3;
    cout<<"Podaj pierwszy napis: ";
    getline(cin, n1);
    cout<<"Podaj drugi napis: ";
    getline(cin, n2);
    cout<<"Podaj trzeci napis: ";
    getline(cin, n3);
    d1=n1.length();
    d2=n2.length();
    d3=n3.length();
    cout<<"Wynik: ";
    if(d1>d2 && d1>d3){
        cout<<n1;
    }
    else if(d2>d1 && d2>d3){
        cout<<n2;
    }
    else{
        cout<<n3;
    }
}