#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Podaj liczbe n: ";
    cin>>n;
    cout<<endl;
    for (int i=1; i<=10; i++){
        cout<<n<<"x"<<i<<"="<<(n*i)<<endl;
    }
    return 0;
}