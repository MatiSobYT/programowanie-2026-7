#include <iostream>
#include <string>
using namespace std;
int main() {
    string napis, napis2;
    char s;
    cout<<"Napisz napis: ";
    getline(cin, napis);
    for (int i=0; i<napis.length(); i++) {
        s=napis[i];
        if (napis2.find(s)==string::npos) {
            napis2.push_back(s);
        }
    }
    cout<<"Bez powtorzen: "<<napis2;
}