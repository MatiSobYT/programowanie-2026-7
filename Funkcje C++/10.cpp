#include <iostream>
using namespace std;
string ocena(int punkty);
int main(){
    int punkty;
    cout<<"Podaj liczbe punktow: ";
    cin>>punkty;
    cout<<"Ocena: "<<ocena(punkty);
}
string ocena(int punkty){
    if (punkty>=0 && punkty<40){
        return "Niedostateczny";
    }
    else if (punkty>=40 && punkty<55){
        return "Dopuszczajacy";
    }
    else if (punkty>=55 && punkty<70){
        return "Dostateczny";
    }
    else if (punkty>=70 && punkty<85){
        return "Dobry";
    }
    else if (punkty>=85 && punkty<95){
        return "Bardzo dobry";
    }
    else if(punkty>=95 && punkty<=100){
        return "Celujacy";
    }
    else{
        return "Bledne dane";
    }
}