#include <iostream>
using namespace std;
int main(){
    int pin=1234, proby=3, typ;
    for(int i=proby; i>0; i--){
        cout<<"Podaj PIN: ";
        cin>>typ;
        if(typ==pin){
            cout<<"Dostep przyznany";
            break;
        }
        else{
            proby--;
            cout<<"Bledny PIN"<<endl<<"Pozostalo prob: "<<proby<<endl;
        }
    }
    if(proby==0){
        cout<<"Konto zablokowane";
    }
}