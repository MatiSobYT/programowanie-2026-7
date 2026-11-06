#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream file("txt\\tekss.txt");
    string najdluzszy_wiersz;
    int naj_dlugosc=INT_MIN;
    if (file.is_open()) {
        string aktualny_wiersz;
        while (getline(file, aktualny_wiersz)) {
            cout<<aktualny_wiersz.length() << " ";
            if (static_cast<int>(aktualny_wiersz.length())>naj_dlugosc) {
                naj_dlugosc=static_cast<int>(aktualny_wiersz.length());
                najdluzszy_wiersz=aktualny_wiersz;
            }
        }
        file.close();
    }
    else {
        cout<<"Nie udalo sie otworzyc";
    }
    cout<<endl<<"Dlugosc najdluzszego wiersza: "<<naj_dlugosc<<endl<<"Jego tresc: "<<najdluzszy_wiersz;
}