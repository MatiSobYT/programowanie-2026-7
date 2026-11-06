#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream file("txt\\liczby.txt");
    if (file.is_open()) {
        int liczba, suma=0;
        while (file>>liczba) {
            suma+=liczba;
            cout<<liczba<<endl;
        }
        file.close();
        cout<<"Suma liczb: "<<suma;
    }
}