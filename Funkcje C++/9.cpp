#include <iostream>
using namespace std;
double dodaj(double a, double b);
double odejmij(double a, double b);
double pomnoz(double a, double b);
double podziel(double a, double b);
int main(){
    int n;
    double a,b;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    cout<<"1. Dodaj"<<endl<<"2. Odejmij"<<endl<<"3. Pomnoz"<<endl<<"4. Podziel"<<endl<<"Twoj wybor: ";
    back:
    cin>>n;
    if(n==1){
        cout<<"Wynik dodawania: "<<dodaj(a,b);
    }
    else if(n==2){
        cout<<"Wynik odejmowania: "<<odejmij(a,b);
    }
    else if(n==3){
        cout<<"Wynik mnozenia: "<<pomnoz(a,b);
    }
    else if(n==4){
        if(b==0){
            cout<<"Nie mozna dzielic przez 0";
        }
        else{
            cout<<"Wynik dzielenia: "<<podziel(a,b);
        }
    }
    else{
        cout<<"Bledny wybor sprobuj ponownie: ";
        goto back;
    }
}
double dodaj(double a, double b){
    return a+b;
}
double odejmij(double a, double b){
    return a-b;
}
double pomnoz(double a, double b){
    return a*b;
}
double podziel(double a, double b){
    return a/b;
}