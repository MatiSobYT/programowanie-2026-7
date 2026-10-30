#include <iostream>
#include <string>
using namespace std;
int main(){
    string napis;
    int l=0;
    cout<<"Podaj napis: ";
    getline(cin, napis);
    cout<<"Liczba spacji: ";
    for(int i=0; i<napis.length(); i++){
        if(napis[i]==' '){
            l++;
        }
    }
    cout<<l;
}