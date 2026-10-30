#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string imie;
    ofstream plik("txt\\imiona.txt", ios::app);
    cout<<"Podaj imie: ";
    cin>>imie;
    plik<<endl<<imie;
    plik.close();
}