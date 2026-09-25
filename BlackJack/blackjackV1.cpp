#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int losujLiczbe();
int dobierzLiczbe(int punkty);
bool czyPrzekroczono21(int punkty);
bool komputerDobiera(int punkty);
int main(){
    srand(time(NULL));
    int graczp=0, opp=0, wybor, wylos;
    graczp=losujLiczbe();
    cout<<"Gracz ma: "<<graczp<<" punktow"<<endl;
    while(true){
        back:
        //Tura gracza
        cout<<endl<<"1 - Dobierz liczbe"<<endl<<"2 - Pas"<<endl<<"Twoj wybor: ";
        cin>>wybor;
        if(wybor==1){
            wylos=dobierzLiczbe(graczp);
            cout<<"Dobierasz..."<<endl<<"Wylosowano: "<<wylos<<" punktow"<<endl;
            graczp=graczp+wylos;
            cout<<"Gracz ma: "<<graczp<<" punktow"<<endl;
            if(czyPrzekroczono21(graczp)==true){
                cout<<"PRZEKROCZYLES 21!"<<endl<<"PRZEGRANA";
                break;
            }
            goto back;
        }
        else if(wybor==2){
            cout<<"Pas"<<endl;
            system("pause");
        }
        else{
            cout<<"Bledny wybor sprobuj ponownie"<<endl;
            goto back;
        }
        //Tura komputera
        while(komputerDobiera(opp)==true){
            wylos=dobierzLiczbe(opp);
            cout<<"Komputer dobiera..."<<endl<<"Wylosowal: "<<wylos<<" punktow"<<endl;
            opp=opp+wylos;
            cout<<"Komputer ma: "<<opp<<" punktow"<<endl;
        }
        if(czyPrzekroczono21(opp)==true){
            cout<<"KOMPUTER PRZEKROCZYL 21!"<<endl<<"WYGRANA";
            break;
        }
        cout<<"Komputer pasuje"<<endl;
        system("pause");
        cout<<"=========="<<endl<<"KONIEC GRY"<<endl<<"=========="<<endl<<"Gracz: "<<graczp<<endl<<"Komputer: "<<opp<<endl;
        if(graczp>opp){
            cout<<"WYGRYWASZ!";
            break;
        }
        else if(opp>graczp){
            cout<<"PRZEGRYWASZ!";
            break;
        }
        else{
            cout<<"REMIS!";
            break;
        }
    }
}
int losujLiczbe(){
    return rand()%10+2;
}
int dobierzLiczbe(int punkty){
    return rand()%10+2;
}
bool czyPrzekroczono21(int punkty){
    if(punkty>21){
        return true;
    }
    else{
        return false;
    }
}
bool komputerDobiera(int punkty){
    if(punkty<16){
        return true;
    }
    else if(punkty>18){
        return false;
    }
    else{
        if(rand()%100+1<=70){
            return true;
        }
        else{
            return false;
        }
    }
}