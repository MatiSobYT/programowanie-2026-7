#include <iostream>
using namespace std;
int nwd(int a, int b);
int main() {
    int a,b;
    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;
    cout<<"NWD: "<<nwd(a,b);
}
int nwd(int a, int b) {
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}