#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("A_dane.txt");
    ofstream par("A_parzyste.txt", ios::trunc);
    ofstream npar("A_nieparzyste.txt", ios::trunc);
    int l_par=0, l_npar=0;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            if (liczba%2==0) {
                l_par++;
                par<<liczba<<endl;
            }
            else {
                l_npar++;
                npar<<liczba<<endl;
            }
        }
        file.close();
        par.close();
        npar.close();
    }
    cout<<"Zapisanych liczb:"<<endl<<"Parzystych: "<<l_par<<endl<<"Nieparzystych: "<<l_npar;
}