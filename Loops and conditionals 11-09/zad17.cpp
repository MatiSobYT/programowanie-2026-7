#include <iostream>
using namespace std;
int main(){
    int a,b,nwd;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    cout<<"Wspolne dzielniki: ";
    for(int i=1; i<=a&&i<=b; i++){
        if (a%i==0&&b%i==0){
            cout<<i<<" ";
            nwd=i;
        }
    }
    cout<<endl<<"NWD to: "<<nwd;
}