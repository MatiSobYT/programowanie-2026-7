#include <iostream>
#include <string>
using namespace std;
int main() {
    string wyraz;
    string samogloski="aeiouyAEIOUY";
    int liczba=0;
    cout<<"Podaj wyraz: ";
    cin>>wyraz;
    for (int i=0; i<wyraz.length(); i++) {
        if (samogloski.find(wyraz[i])!=string::npos) {
            liczba++;
        }
    }
    cout<<"Liczba samoglosek: "<<liczba;
}