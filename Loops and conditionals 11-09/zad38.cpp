#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Podaj n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<i*i<<" ";
    }
    cout<<endl;
    for(int j=1; j<=n; j++){
        cout<<j*j*j<<" ";
    }
}