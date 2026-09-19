#include <iostream>
using namespace std;
int main(){
    int n,li_d=0;
    cout<<"Podaj liczbe: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            li_d++;
        }
    }
    cout<<"Liczba dzielnikow: "<<li_d;
}