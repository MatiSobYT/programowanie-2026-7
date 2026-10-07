#include <iostream>
#include <string>
using namespace std;
int main() {
    string napis;
    cout<<"Podaj napis: ";
    getline(cin,napis);
    for (int i=0; i<napis.length(); i++) {
        if (napis[i]=='a'){
            napis[i]='b';
        }
    }
    cout<<"Podmianka: "<<napis;
}