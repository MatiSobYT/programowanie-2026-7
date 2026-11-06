#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\oceny.txt");
    int suma=0, srednia, liczba_liczb=0;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            cout<<liczba<<endl;
            suma+=liczba;
            liczba_liczb++;
        }
        file.close();
    }
    srednia=suma/liczba_liczb;
    cout<<"Srednia: "<<srednia<<endl;
    cout<<"Z ilu liczb: "<<liczba_liczb;
}