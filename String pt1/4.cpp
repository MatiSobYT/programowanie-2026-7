#include <iostream>
#include <string>
using namespace std;
int main() {
    string napis;
    cout<<"Podaj napis: ";
    getline(cin, napis);
    int l=(napis.length());
    int w=0;
    for (int i=0; i<napis.length(); i++){
        if (napis[i]=='a'){
            w++;
        }
    }
    cout<<"Liczba 'a': "<<w;
}