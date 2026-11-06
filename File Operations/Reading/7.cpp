#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\liczbr.txt");
    bool wyst=false;
    int szukana, l_wys=0;
    cout<<"Podaj szukana liczbe: ";
    cin>>szukana;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            if (szukana==liczba) {
                l_wys++;
                wyst=true;
            }
        }
        file.close();
    }
    if (wyst) {
        cout<<"Liczba wystepuje w pliku"<<endl<<"Wystepuje tyle razy: "<<l_wys;
    }
    else {
        cout<<"Liczba nie wystepuje w pliku";
    }
}