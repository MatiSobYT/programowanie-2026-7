#include <iostream>
#include <string>
using namespace std;
int main() {
    string napis;
    cout<<"Podaj napis: ";
    getline(cin, napis);
    char najczestszy=napis[0];
    int max=0;
    for(int i=0; i<napis.length(); i++) {
        int licznik=0;
        for(int j=0; j<napis.length(); j++) {
            if(napis[i]==napis[j]) {
                licznik++;
            }
        }
        if(licznik>max) {
            max=licznik;
            najczestszy=napis[i];
        }
    }
    cout<<"Najczestszy znak: "<<najczestszy;
}