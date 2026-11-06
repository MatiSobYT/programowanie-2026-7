#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string imie, nazwisko;
    int nr_tel;
    ofstream plik("txt\\kontakty.txt", ios::app);
    cout<<"Podaj imie: ";
    cin>>imie;
    cout<<"Podaj nazwisko: ";
    cin>>nazwisko;
    cout<<"Podaj nr tel: ";
    cin>>nr_tel;
    plik<<endl<<imie<<" "<<nazwisko<<" - "<<nr_tel;
    plik.close();
}