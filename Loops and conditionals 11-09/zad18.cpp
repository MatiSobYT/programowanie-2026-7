#include <iostream>
using namespace std;
int main(){
    int a,b,nwd;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"NWD to: "<<a;
}