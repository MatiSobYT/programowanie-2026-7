//WINDOWS ONLY
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int zwyklyAtak();
int silnyAtak();
int lecz();
int opAtk();
int main(){
    srand(time(NULL));
    int graczhp=100, ophp=100, wybor, dmg, heal;
    while(true){
        cout<<"=====RPG DLA BIEDNYCH====="<<endl<<endl<<"Gracz: "<<graczhp<<" HP"<<endl<<"Opponent: "<<ophp<<" HP"<<endl<<endl<<"1 - Zwykly atak"<<endl<<"2 - Leczenie"<<endl<<"3 - Silny atak"<<endl<<endl<<"Wybierz akcje: ";
        cin>>wybor;
        if(wybor==1){
            dmg=zwyklyAtak();
            ophp=ophp-dmg;
            cout<<"Gracz zadaje: "<<dmg<<" obrazen"<<endl<<"Przeciwnik: "<<ophp<<" HP"<<endl;
            system("pause");
        }
        else if(wybor==2){
            heal=lecz();
            graczhp=graczhp+heal;
            if(graczhp>100){
                graczhp=100;
            }
            cout<<"Gracz: "<<graczhp<<" HP"<<endl;
            system("pause");
        }
        else if(wybor==3){
            dmg=silnyAtak();
            if(dmg==0){
                cout<<"Silny atak nie udal sie!"<<endl;
            }
            else{
                ophp=ophp-dmg;
                cout<<"Gracz zadaje: "<<dmg<<" obrazen"<<endl<<"Przeciwnik: "<<ophp<<" HP"<<endl;
            }
            system("pause");
        }
        else{
            cout<<"Bledny wybor sprobuj ponownie"<<endl;
            system("pause");
        }
        if(ophp<1){
            cout<<"Zwyciestwo!";
            break;
        }
        dmg=opAtk();
        graczhp=graczhp-dmg;
        cout<<"Przeciwnik zadaje: "<<dmg<<" obrazen"<<endl<<"Gracz: "<<graczhp<<" HP"<<endl;
        if(graczhp<1){
            cout<<"Przegrana!";
            break;
        }
        system("pause");
    }
    return 0;
}
int opAtk(){
    return rand()%11+5;
}
int zwyklyAtak(){
    return rand()%11+10;
}
int silnyAtak(){
    int los=rand()%100+1;
    if(los<=70){
        return rand()%16+20;
    }
    else{
        return 0;
    }
}
int lecz(){
    return rand()%11+5;
}