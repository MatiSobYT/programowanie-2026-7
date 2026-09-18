#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Podaj liczbe n: ";
    cin>>n;
    cout<<endl;
    int i=1;
    int suma=0;
    while (i<=n){
        suma = suma+i;
        i++;
    }
    cout<<"Dla n="<<n<<" wynik powinien wynosic "<<suma<<", poniewaz ";
    i=1;
    suma=0;
    while (i<n){
        cout<<i<<" + ";
        i++;
    }
    cout<<n<<" = "<<suma;
    return 0;
}