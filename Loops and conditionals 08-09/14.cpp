#include <iostream>
using namespace std;
int main(){
    int wybor,a,b;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    back:
    cout<<"1. Dodawanie"<<endl<<"2. Odejmowanie"<<endl<<"3. Mnozenie"<<endl<<"4. Dzielenie"<<endl<<"5. Potegowanie"<<endl<<"6. Reszta z dzielenia"<<endl<<"7. Wyjscie"<<endl<<"Twoj wybor: ";
    cin>>wybor;
    if(wybor==1){
        cout<<"Wynik dodawania: "<<a+b;
    }
    else if(wybor==2){
        cout<<"Wynik odejmowania: "<<a-b;
    }
    else if(wybor==3){
        cout<<"Wynik mnozenia: "<<a*b;
    }
    else if(wybor==4){
        if(b==0){
            cout<<"Nie mozna dzielic przez 0";
            return 0;
        }
        else{
        cout<<"Wynik dzielenia: "<<a/b;
        }
    }
    else if(wybor==5){
        double potega=a;
        for(int i=1; i<=b; i++){
            potega=potega*a;
        }
        cout<<"Wynik potegowania: "<<potega;
    }
    else if(wybor==6){
        cout<<"Reszta z dzielenia: "<<a%b;
    }
    else if(wybor==7){
        cout<<"Zegnam";
        return 0;
    }
    else{
        cout<<"\033[41m"<<"Bledny wybor"<<"\033[0m"<<endl;
        goto back;
    }
}