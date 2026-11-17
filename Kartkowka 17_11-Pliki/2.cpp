#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream file("A_tekst.txt");
    int licznik=0;
    char a='a', A='A';
    if (file.is_open()) {
        string tekst;
        while (getline(file, tekst)) {
            for (int i=0; i<tekst.length(); i++) {
                if (tekst.at(i)==a || tekst.at(i)==A) {
                    licznik++;
                }
            }
        }
        file.close();
    }
    cout<<"a i A w pliku: "<<licznik;
}