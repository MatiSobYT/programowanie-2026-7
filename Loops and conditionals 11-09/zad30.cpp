#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
    cout<<"Odgadnij wylosowana liczbe"<<endl;
    srand(time(NULL));
    int los = rand() % (100+1);
    int typ=0;
    int fail=1;
    for(int lprob=10; lprob>0; lprob--){
        cout<<"Typuj: ";
        cin>>typ;
        if(typ==los){
            cout<<"Zawod typer"<<endl;
            break;
        }
        else{
            cout<<"Probuj dalej"<<endl;
            if(abs(typ-los)<10 && typ!=los){
                cout<<"Podpowiedz: Jestes mniej niz 10 od celu"<<endl;
            }
        }
        fail++;
    }
    if(fail>=10){
        cout<<"Niestety nie odgadles liczby, liczba bylo: "<<los;
    }
    else{
        cout<<"Odgadniecie zajelo ci: "<<fail<<" prob";
    }
}