#include <iostream>
#include <string>
using namespace std;
int main() {
    string tekst;
    cout<<"Napisz napis: ";
    getline(cin, tekst);
    cout<<"Dlugosc napisu: "<<tekst.length();
}