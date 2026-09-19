#include <iostream>
using namespace std;
int main(){
    int a,b,c,cala,suma;
    cout<<"Podaj liczbe 3-cyfrowa: ";
    cin>>cala;
    c=cala%10;
    b=(cala/10)%10;
    a=cala/100;
    suma=(a*a*a)+(b*b*b)+(c*c*c);
    if(suma==cala){
        cout<<"Liczba jest armstrong";
    }
    else{
        cout<<"Liczba nie jest armstrong";
    }
}