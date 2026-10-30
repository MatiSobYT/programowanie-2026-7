#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string produkt;
    ofstream plik("txt\\zakupy.txt", ios::trunc);
    for (int i=0; i<5; i++) {
        cout<<"Podaj produkt: ";
        cin>>produkt;
        plik<<produkt<<endl;
    }
    plik.close();
}