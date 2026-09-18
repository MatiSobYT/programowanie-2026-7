#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<endl<<"Podaj liczbe b: ";
    cin>>b;
    cout<<endl;
    for (int i=a; i<=b; i++){
        if (i % 3 == 0){
            cout<<i<<" ";
        }
        else{}
    }
    return 0;
}