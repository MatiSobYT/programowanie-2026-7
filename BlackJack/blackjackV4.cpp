//WINDOWS ONLY i opp=opponent points/punkty przeciwnika i diff=difficulty/poziom trudnosci
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int losujLiczbe();
int dobierzLiczbe(int punkty);
bool czyPrzekroczono21(int punkty);
bool komputerDobiera(int punkty, int diff);
bool BLACKJACK(int punkty);
int main(){
    srand(time(NULL));
    int wybor, wylos, win=0, loss=0, remis=0, diff, blackjacks=0;
    cofka:
    //Poziomy trudnosci
    cout<<"Wybierz poziom trudnosci"<<endl<<"1 - Latwy"<<endl<<"2 - Normalny"<<endl<<"3 - Trudny"<<endl<<"Twoj wybor: ";
    cin>>diff;
    if(diff<1 || diff>3){
        cout<<"Bledny wybor sprobuj ponownie"<<endl;
        goto cofka;
    }
    else{
    start:
    int graczp=0, opp=0;
    graczp=losujLiczbe();
    cout<<"Gracz ma: "<<graczp<<" punktow"<<endl;
    while(true){
        back:
        //Tura gracza
        cout<<endl<<"1 - Dobierz liczbe"<<endl<<"2 - Pas"<<endl<<"Twoj wybor: ";
        cin>>wybor;
        if(wybor==1){
            wylos=dobierzLiczbe(graczp);
            //Szczesliwa liczba
            if(wylos==11){
                cout<<"\033[42m"<<"Wylosowales 11!"<<"\033[0m"<<endl<<"1 - Zachowaj 11"<<endl<<"2 - Zamien na 1"<<endl<<"Twoj wybor: ";
                cin>>wybor;
                if(wybor==1){
                    goto leave;
                }
                else if(wybor==2){
                    graczp=graczp+1;
                    goto swap;
                }
            }
            cout<<"Dobierasz..."<<endl<<"Wylosowano: "<<wylos<<" punktow"<<endl;
            leave:
            graczp=graczp+wylos;
            swap:
            cout<<"Gracz ma: "<<graczp<<" punktow"<<endl;
            if(czyPrzekroczono21(graczp)==true){
                cout<<"\033[41m"<<"PRZEKROCZYLES 21!"<<endl<<"PRZEGRANA"<<"\033[0m"<<endl;
                loss++;
                break;
            }
            //Customer request V
            if(BLACKJACK(graczp)==true){
                cout<<"\033[44m"<<"BLACKJACK!"<<"\033[0m"<<endl;
                blackjacks++;
                goto pass;
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
        pass:
        //Tura komputera
        while(komputerDobiera(opp, diff)==true){
            wylos=dobierzLiczbe(opp);
            cout<<"Komputer dobiera..."<<endl<<"Wylosowal: "<<wylos<<" punktow"<<endl;
            opp=opp+wylos;
            cout<<"Komputer ma: "<<opp<<" punktow"<<endl;
            system("pause");
        }
        if(czyPrzekroczono21(opp)==true){
            cout<<"\033[42m"<<"KOMPUTER PRZEKROCZYL 21!"<<endl<<"WYGRANA"<<"\033[0m"<<endl;
            win++;
            break;
        }
        //Also customer request V
        if(BLACKJACK(opp)==true){
            cout<<"\033[44m"<<"BLACKJACK!"<<"\033[0m"<<endl;
            blackjacks++;
        }
        cout<<"Komputer pasuje"<<endl;
        system("pause");
        //Porownanie
        cout<<"=========="<<endl<<"KONIEC GRY"<<endl<<"=========="<<endl<<"Gracz: "<<graczp<<endl<<"Komputer: "<<opp<<endl;
        if(graczp>opp){
            cout<<"\033[42m"<<"WYGRYWASZ!"<<"\033[0m"<<endl;
            win++;
            break;
        }
        else if(opp>graczp){
            cout<<"\033[41m"<<"PRZEGRYWASZ!"<<"\033[0m"<<endl;
            loss++;
            break;
        }
        else{
            cout<<"\033[48;5;242m"<<"REMIS!"<<"\033[0m"<<endl;
            remis++;
            break;
        }
    }
    //Pytanie o ponowna rozgrywke
    end:
    cout<<"Czy chcesz zagrac jeszcze raz?"<<endl<<"1 - Tak"<<endl<<"2 - Nie"<<endl<<"Twoj wybor: ";
    cin>>wybor;
    if(wybor==1){
        goto start;
    }
    else if(wybor==2){
        cout<<"=========="<<endl<<"STATYSTYKI"<<endl<<"=========="<<endl<<"\033[42m"<<"Wygrane: "<<win<<"\033[0m"<<endl<<"\033[41m"<<"Przegrane: "<<loss<<"\033[0m"<<endl<<"\033[48;5;242m"<<"Remisy: "<<remis<<"\033[0m"<<endl<<"\033[44m"<<"BlackJacki: "<<blackjacks<<"\033[0m";
        return 0;
    }
    else{
        cout<<"Bledny wybor sprobuj ponownie"<<endl;
        goto end;
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
bool komputerDobiera(int punkty, int diff){
    if(diff==1){
        if(punkty<17){
            return true;
        }
        else{
            return false;
        }
    }
    else if(diff==2){
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
    else if(diff==3){
        if(punkty<17){
            return true;
        }
        else if(punkty>19){
            return false;
        }
        else if(punkty==19){
            if(rand()%100+1<=50){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if(rand()%100+1<=85){
                return true;
            }
            else{
                return false;
            }
        }
    }
}
//Customer request V
bool BLACKJACK(int punkty){
    if(punkty==21){
        return true;
    }
    else{
        return false;
    }
}