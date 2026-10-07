#include <iostream>
#include <string>
using namespace std;
int main(){
    string zdanie;
    int ls=0;
    cout<<"Podaj zdanie: ";
    getline(cin, zdanie);
    for(int i=0; i<zdanie.length(); i++){
        if(zdanie[i]=='a' || zdanie[i]=='e' || zdanie[i]=='i' || zdanie[i]=='o' || zdanie[i]=='u' || zdanie[i]=='y'){ //Tylko male litery ziomek
            ls++;
        }
    }
    cout<<"Liczba samoglosek: "<<ls;
}