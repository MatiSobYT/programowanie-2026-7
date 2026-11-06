#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream calosc("txt\\liczbr.txt");
    ofstream parzyste("txt\\parzyste.txt");
    int l_par=0;
    if (calosc.is_open()) {
        int liczba;
        while (calosc>>liczba) {
            if (liczba%2==0) {
                l_par++;
                parzyste<<liczba;
            }
        }
        calosc.close();
        parzyste.close();
    }
    cout<<"Zapisano "<<l_par<<" liczb.";
}