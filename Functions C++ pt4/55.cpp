#include <iostream>
using namespace std;
bool czyParzysta(int liczba);
bool czyPierwsza(int liczba);
int sumaCyfr(int liczba);
int liczbaCyfr(int liczba);
int main() {
    while(true){
        int liczba;
        cout<<"Podaj liczbe: ";
        cin>>liczba;
        if(liczba==0){
            cout<<"Koniec programu";
            break;
        }
        else{
            if (czyParzysta(liczba)==true) {
                cout<<"Liczba jest parzysta"<<endl;
            }
            else {
                cout<<"Liczba jest nieparzysta"<<endl;
            }
            if (czyPierwsza(liczba)==true) {
                cout<<"Liczba jest pierwsza"<<endl;
            }
            else {
                cout<<"Liczba nie jest pierwsza"<<endl;
            }
            cout<<"Suma cyfr: "<<sumaCyfr(liczba)<<endl;
            cout<<"Liczba cyfr: "<<liczbaCyfr(liczba)<<endl;
        }
    }
}
bool czyParzysta(int liczba) {
    if (liczba%2==0) {
        return true;
    }
    else {
        return false;
    }
}
bool czyPierwsza(int liczba) {
    int licznik=0;
    for (int i=2; i<liczba; i++) {
        if (liczba%i==0) {
            licznik++;
        }
    }
    if (licznik==0) {
        return true;
    }
    else {
        return false;
    }
}
int sumaCyfr(int liczba) {
    int suma=0;
    liczba=abs(liczba);
    for (int i=liczba; i>0; i=i/10) {
        suma=suma+(i%10);
    }
    return suma;
}
int liczbaCyfr(int liczba) {
    int lcyfr=1;
    liczba=abs(liczba);
    for (int i=liczba; i>=10; i=i/10) {
        lcyfr++;
    }
    return lcyfr;
}