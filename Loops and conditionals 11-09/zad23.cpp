#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Podaj wysokosc choinki: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int l=0; l<n-1; l++){
        cout<<" ";
    }
    cout<<"|";
}