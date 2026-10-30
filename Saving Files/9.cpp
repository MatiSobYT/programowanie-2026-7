#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string imie;
    int ocena;
    ofstream plik("txt\\oceny.txt", ios::app);
    cout<<"Podaj imie: ";
    cin>>imie;
    cout<<"Podaj ocene: ";
    cin>>ocena;
    plik<<endl<<imie<<" Ocena: "<<ocena;
    plik.close();
}