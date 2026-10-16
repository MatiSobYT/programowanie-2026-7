#include <iostream>
#include <string>
using namespace std;
int main(){
    string napis;
    bool palindrom=true;
    cout<<"Podaj napis: ";
    cin>>napis;
    for(int i=0; i<napis.length()/2; i++){
        if(napis[i]!=napis[napis.length()-1-i]){
            palindrom=false;
            break;
        }
    }
    if(palindrom==true){
        cout<<"Palindrom";
    }
    else{
        cout<<"Nie palindrom";
    }
}