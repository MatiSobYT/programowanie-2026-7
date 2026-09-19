#include <iostream>
using namespace std;
int main(){
    int liczba;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    if(liczba<=0){
        cout<<"Liczba musi byc dodatnia";
        return 0;
    }
    int kopia=liczba;
    int odwrocona=0;
    while(kopia>0){
        int cyfra=kopia%10;
        odwrocona=odwrocona*10+cyfra;
        kopia=kopia/10;
    }
    cout<<"Odwrocona liczba: "<<odwrocona<<endl;
    if(liczba==odwrocona){
        cout<<"Liczba jest palindromem";
    }
    else{
        cout<<"Liczba nie jest palindromem";
    }
}