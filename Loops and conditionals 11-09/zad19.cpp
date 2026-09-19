#include <iostream>
using namespace std;
int main(){
    int a,b,iloczyn;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    iloczyn=a*b;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"NWW to: "<<iloczyn/a;
}