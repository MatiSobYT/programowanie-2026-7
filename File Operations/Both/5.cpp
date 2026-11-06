#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\tekst.txt");
    int l_znak=0;
    char s;
    cout<<"Podaj szukany znak: ";
    cin>>s;
    if (file.is_open()) {
        char n;
        while (file>>n) {
            if (n==s) {
                l_znak++;
            }
        }
        file.close();
    }
    cout<<"Znak wystepuje w tekscie tyle razy: "<<l_znak;
}