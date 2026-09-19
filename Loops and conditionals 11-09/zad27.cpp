#include <iostream>
using namespace std;
int main(){
    int n,dod=0,uja=0,par=0,npar=0;
    while(true){
        cout<<"Podaj liczbe: ";
        cin>>n;
        if(n>0){
            dod++;
        }
        if(n<0){
            uja++;
        }
        if(n%2==0){
            par++;
        }
        if(n%2==1){
            npar++;
        }
        if(n==0){
            break;
        }
    }
    cout<<"Dodatnie: "<<dod<<endl;
    cout<<"Ujemne: "<<uja<<endl;
    cout<<"Parzyste: "<<par<<endl;
    cout<<"Nieparzyste: "<<npar;
}