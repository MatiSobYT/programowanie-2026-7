#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\dane.txt");
    int suma_par=0, suma_npar=0;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            if (liczba%2==0) {
                suma_par+=liczba;
            }
            else {
                suma_npar+=liczba;
            }
        }
        file.close();
    }
    cout<<"Suma liczb parzystych: "<<suma_par<<endl;
    cout<<"Suma liczb nieparzystych: "<<suma_npar;
}