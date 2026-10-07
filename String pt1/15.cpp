#include <iostream>
#include <string>
using namespace std;
int main(){
    string napis;
    int l=1;
    cout<<"Podaj napis: ";
    getline(cin, napis);
    cout<<"Liczba slow: ";
    for(int i=0; i<napis.length(); i++){
        if(napis[i]==' '){
            l++;
        }
    }
    cout<<l;
}