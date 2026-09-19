#include <iostream>
using namespace std;
int main(){
    bool dod=true;
    int n,m;
    cout<<"Ile liczb: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Podaj liczbe: ";
        cin>>m;
        if(m<0){
            dod=false;
        }
    }
    if(dod==0){
        cout<<"Nie wszystkie liczby sa dodatnie";
    }
    else{
        cout<<"Wszystkie liczby sa dodatnie";
    }
}