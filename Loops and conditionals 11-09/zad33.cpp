#include <iostream>
using namespace std;
int main(){
    int n,li_d=0;
    cout<<"Podaj liczbe: ";
    cin>>n;
    cout<<"Dzielniki: ";
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}