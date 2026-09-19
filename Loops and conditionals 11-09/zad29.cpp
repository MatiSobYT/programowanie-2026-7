#include <iostream>
using namespace std;
int main(){
    int stan=1000,wybor,wplata,wyplata,wybor2,wybor3;
    while(true){
        back:
        cout<<"Menu bankowe"<<endl<<"1. Stan konta"<<endl<<"2. Wplata"<<endl<<"3. Wyplata"<<endl<<"4. Wyjscie"<<endl<<"Wybor: ";
        cin>>wybor;
        if(wybor==1){
            back2:
            cout<<"Stan konta: "<<stan<<"zl"<<endl;
            cout<<"Wcisnij 1 aby powrocic do menu..."<<endl;
            cin>>wybor2;
            if(wybor2==1){
                 goto back;
            }
            else{
                goto back2;
            }
        }
        else if(wybor==2){
            cout<<"Ile chcesz wplacic: ";
            cin>>wplata;
            stan=stan+wplata;
            goto back;
        }
        else if(wybor==3){
            cout<<"Ile chcesz wyplacic: ";
            cin>>wyplata;
            if(wyplata>stan){
                back3:
                cout<<"Brak srodkow, operacja odrzucona"<<endl<<"Wcisnij 1 aby powrocic do menu..."<<endl;
                cin>>wybor3;
                if(wybor3==1){
                    goto back;
                }
                else{
                    goto back3;
                }
            }
            else{
                stan=stan-wyplata;
                goto back;
            }
        }
        if(wybor==4){
            cout<<"Zegnam";
            break;
        }
        else{
            cout<<"\033[41m"<<"Bledny wybor sprobuj ponownie"<<"\033[0m"<<endl;
            goto back;
        }
    }
    return 0;
}