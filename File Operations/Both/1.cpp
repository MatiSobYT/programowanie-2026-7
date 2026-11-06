#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\liczby.txt");
    int l_par=0, l_npar=0;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            if (liczba%2==0) {
                l_par++;
            }
            else {
                l_npar++;
            }
        }
        file.close();
    }
    cout<<"Liczba parzystych: "<<l_par<<endl;
    cout<<"Liczba nieparzystych: "<<l_npar;
}