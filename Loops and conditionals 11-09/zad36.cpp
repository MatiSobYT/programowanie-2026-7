#include <iostream>
using namespace std;
int main(){
    int n,c,licznik=0;
    cout<<"Podaj liczbe: ";
    cin>>n;
    cout<<"Podaj cyfre: ";
    cin>>c;
    for(int i=n; i>0; i=i/10){
        if(i%10==c){
            licznik++;
        }
    }
    cout<<"Wystapienia: "<<licznik;
}