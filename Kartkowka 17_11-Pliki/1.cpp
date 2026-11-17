#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream file("A_liczby.txt", ios::trunc);
    int licznik=0;
    if (file.is_open()) {
        int liczba;
        while (true) {
            cout<<"Podaj liczbe: ";
            cin>>liczba;
            if (liczba==0) {
                break;
            }
            else {
                file<<liczba<<endl;
                licznik++;
            }
        }
        file.close();
    }
    cout<<"W pliku zapisano: "<<licznik<<" liczb";
}