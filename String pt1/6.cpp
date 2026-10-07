#include <iostream>
#include <string>
using namespace std;
int main(){
    string tekst;
    cout<<"Napisz napis: ";
    getline(cin, tekst);
    cout<<"Napis od tylu: ";
    for(int i=tekst.length()-1; i>=0; i--){
        cout<<tekst[i];
    }
}