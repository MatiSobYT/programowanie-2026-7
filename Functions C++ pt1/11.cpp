#include <iostream>
using namespace std;
bool czyPierwsza(int liczba);
int main(){
    int liczba;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    if(czyPierwsza(liczba)==1){
        cout<<"Liczba jest pierwsza";
    }
    else{
        cout<<"Liczba nie jest pierwsza";
    }
}
bool czyPierwsza(int liczba){
    int licznik=0;
    for (int i=2; i<liczba; i++) {
        if (liczba%i==0) {
            licznik++;
        }
        else {
            licznik=licznik;
        }
    }
    if (licznik==0) {
        return 1;
    }
    else {
        return 0;
    }
}