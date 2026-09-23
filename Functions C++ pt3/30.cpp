#include <iostream>
using namespace std;
int punktyBonusowe(int punkty, int bonus);
int main(){
    int punkty, bonus;
    cout<<"Podaj liczbe punktow: ";
    cin>>punkty;
    cout<<"Podaj wysokosc bonusu: ";
    cin>>bonus;
    if(punktyBonusowe(punkty, bonus)<0){
        cout<<"Bledne dane";
    }
    else{
    cout<<"Wynik: "<<punktyBonusowe(punkty, bonus);
    }
}
int punktyBonusowe(int punkty, int bonus){
    if(punkty>100){
        return -1;
    }
    else if(punkty+bonus>100){
        return 100;
    }
    else{
        return punkty+bonus;
    }
}