#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\dans.txt");
    int l_par=0, naj_par=INT_MIN;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            if (liczba%2==0) {
                l_par++;
                if (liczba>naj_par) {
                    naj_par=liczba;
                }
            }
        }
        file.close();
    }
    if (l_par==0) {
        cout<<"Brak liczb parzystych w pliku";
    }
    else {
        cout<<"Najwieksza liczba parzysta: "<<naj_par;
    }
}