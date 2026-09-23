#include <iostream>
using namespace std;
int ocena(int punkty);
int main(){
    int punkty;
    cout<<"Podaj liczbe punktow: ";
    cin>>punkty;
    if(ocena(punkty)==0){
        cout<<"Bledne dane";
    }
    else{
        cout<<"Ocena: "<<ocena(punkty)<<endl;
        if(ocena(punkty)>=2){
            cout<<"ZDAL EGZAMIN";
        }
        else{
            cout<<"NIE ZDAL EGZAMINU";
        }
    }
}
int ocena(int punkty){
    if(punkty<0){
        return 0;
    }
    else if(punkty>=0 && punkty<40){
        return 1;
    }
    else if(punkty<55){
        return 2;
    }
    else if(punkty<70){
        return 3;
    }
    else if(punkty<85){
        return 4;
    }
    else if(punkty<95){
        return 5;
    }
    else if(punkty<=100){
        return 6;
    }
    else{
        return 0;
    }
}