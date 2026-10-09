#include <iostream>
#include <string>
using namespace std;
int main() {
    string napis, napis2, napis3, napis4;
    char s;
    bool anagram=true;
    cout<<"Napisz napis: ";
    getline(cin, napis);
    for (int i=0; i<napis.length(); i++) {
        s=napis[i];
        if (napis2.find(s)==string::npos) {
            napis2.push_back(s);
        }
    }
    cout<<"Napisz 2 napis: ";
    getline(cin, napis3);
    for (int i=0; i<napis3.length(); i++) {
        s=napis3[i];
        if (napis4.find(s)==string::npos) {
            napis4.push_back(s);
        }
    }
    for (int i=0; i<napis2.length(); i++) {
        s=napis2[i];
        if (napis4.find(s)==string::npos) {
            anagram=false;
            break;
        }
    }
    for (int i=0; i<napis4.length(); i++) {
        s=napis4[i];
        if (napis2.find(s)==string::npos) {
            anagram=false;
            break;
        }
    }
    if (anagram==true) {
        cout<<"Anagram";
    }
    else {
        cout<<"Nie anagram";
    }
}