#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string imie, nazwisko;
    int wiek;
    ofstream plik("txt\\osoba.txt");
    cout<<"Podaj imie:";
    cin>>imie;
    cout<<"Podaj nazwisko: ";
    cin>>nazwisko;
    cout<<"Podaj wiek: ";
    cin>>wiek;
    plik<<imie<<endl<<nazwisko<<endl<<wiek;
    plik.close();
}