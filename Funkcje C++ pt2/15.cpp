#include <iostream>
using namespace std;
bool czyZero(int liczba);
int main(){
    int liczba;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    if(czyZero(liczba)==0){
        cout<<"To nie zero";
    }
    else{
        cout<<"To je zero";
    }
}
bool czyZero(int liczba){
    if(liczba==0){
        return 1;
    }
    else{
        return 0;
    }
}