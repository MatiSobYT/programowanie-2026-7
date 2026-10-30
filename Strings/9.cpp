#include <iostream>
#include <string>
using namespace std;
int main(){
    string napis;
    bool p=true;
    cout<<"Podaj napis: ";
    getline(cin, napis);
    for(int i=0; i<napis.length()/2; i++){
        if(napis[i]!=napis[napis.length()-1-i]){
            p=false;
            break;
        }
    }
    if(p==true){
        cout<<"Palindrom";
    }
    else{
        cout<<"Nie palindrom";
    }
}