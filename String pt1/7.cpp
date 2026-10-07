#include <iostream>
#include <string>
using namespace std;
int main(){
    string tekst;
    cout<<"Podaj tekst: ";
    getline(cin, tekst);
    cout<<"Czy sa samogloski: ";
    if(tekst.find('a')!=string::npos || tekst.find('e')!=string::npos || tekst.find('i')!=string::npos  || tekst.find('o')!=string::npos || tekst.find('u')!=string::npos || tekst.find('y')!=string::npos){  //Sprawdza tylko male litery bo tak
        cout<<"TAK";
    }
    else{
        cout<<"NIE";
    }
}