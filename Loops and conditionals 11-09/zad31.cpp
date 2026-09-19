#include <iostream>
using namespace std;
int main(){
    int n,suma=0;
    cout<<"Podaj n: ";
    cin>>n;
    for(int i=2; i<=n; i=i+2){
        suma=suma+i;
    }
    cout<<"Suma: "<<suma;
}