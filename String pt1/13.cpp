#include <iostream>
#include <string>
using namespace std;
int main(){
    string napis, bs;
    cout<<"Napisz napis: ";
    getline(cin, napis);
    for(int i=0; i<napis.length(); i++){
        if(napis[i]!=' '){
            bs+=napis[i];
        }
    }
    cout<<"Bez spacji: "<<bs;
}