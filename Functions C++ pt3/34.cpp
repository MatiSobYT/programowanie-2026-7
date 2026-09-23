#include <iostream>
using namespace std;
int czasPodrozy(int kilometry, int predkosc);
int main(){
    int km, spd;
    cout<<"Podaj dlugosc trasy w km: ";
    cin>>km;
    cout<<"Podaj predkosc w km/h: ";
    cin>>spd;
    if(czasPodrozy(km,spd)>=60){
        cout<<"Czas podrozy: "<<(czasPodrozy(km,spd)/60)<<" godzin/a/y "<<(czasPodrozy(km,spd)%60)<<" minut/a/y ";
    }
    else{
        cout<<"Czas podrozy: "<<czasPodrozy(km,spd)<<" minut/a/y";
    }
}
int czasPodrozy(int kilometry, int predkosc){
    return (kilometry*60)/predkosc;
}