#include <iostream>
#include <string>
using namespace std;
int main() {
    string tekst;
    cout<<"Podaj napis: ";
    getline(cin, tekst);
    cout<<"Pierwszy znak: "<<tekst.front()<<endl<<"Ostatni znak: "<<tekst.back();
}