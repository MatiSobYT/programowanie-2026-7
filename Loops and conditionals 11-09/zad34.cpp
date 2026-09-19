#include <iostream>
using namespace std;
int main(){
    int n,m,biggest=0;
    cout<<"Ile liczb: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Podaj liczbe: ";
        cin>>m;
        if(m>biggest){
            biggest=m;
        }
    }
    cout<<"Najwieksza liczba: "<<biggest;
}