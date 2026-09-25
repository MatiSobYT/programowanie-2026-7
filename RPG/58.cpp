//WINDOWS ONLY i op=opponent/przeciwnik
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int zwyklyAtak();
int silnyAtak();
int lecz();
int opAtk();
int losujAkcjePrzeciwnika(int hp);
int main(){
    srand(time(NULL));
    int graczhp=100, ophp=100, wybor, dmg, heal, opwybor;
    while(true){
        back:
        //Tura gracza
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
            cout<<"Gracz odzyskuje: "<<heal<<" HP"<<endl;
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
            goto back;
        }
        if(ophp<1){
            cout<<"Zwyciestwo!";
            break;
        }
        //Tura przeciwnika
        cout<<"Przeciwnik wybral: ";
        opwybor=losujAkcjePrzeciwnika(ophp);
        if(opwybor=1){
            dmg=opAtk();
            graczhp=graczhp-dmg;
            cout<<"ZWYKLY ATAK"<<endl<<"Przeciwnik zadaje: "<<dmg<<" obrazen"<<endl<<"Gracz: "<<graczhp<<" HP"<<endl;
            system("pause");
        }
        else if(opwybor=2){
            heal=lecz();
            ophp=ophp+heal;
            cout<<"LECZENIE"<<endl<<"Przeciwnik odzyskuje: "<<heal<<" HP"<<endl;
            if(ophp>100){
                ophp=100;
            }
            cout<<"Przeciwnik: "<<ophp<<" HP"<<endl;
            system("pause");
        }
        else{
            cout<<"SILNY ATAK"<<endl;
            dmg=silnyAtak();
            if(dmg==0){
                cout<<"Silny atak przeciwnika nie udal sie!"<<endl;
            }
            else{
                graczhp=graczhp-dmg;
                cout<<"Przeciwnik zadaje: "<<dmg<<" obrazen"<<endl<<"Gracz: "<<graczhp<<" HP"<<endl;
            }
            system("pause");
        }
        if(graczhp<1){
            cout<<"Przegrana!";
            break;
        }
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
int losujAkcjePrzeciwnika(int hp){
    if(hp<30){
        int los=rand()%100+1;
        if(los<=40){
            return 1;
        }
        else if(los<=85){
            return 2;
        }
        else{
            return 3;
        }
    }
    else{
        int los=rand()%100+1;
        if(los<=60){
            return 1;
        }
        else if(los<=85){
            return 2;
        }
        else{
            return 3;
        }
    }
}