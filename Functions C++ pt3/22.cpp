#include <iostream>
using namespace std;
int najmniejsza(int a, int b, int c);
int main(){
    int a,b,c;
    cout<<"Podaj 3 liczby: ";
    cin>>a>>b>>c;
    cout<<"Najmniejsza: "<<najmniejsza(a,b,c);
}
int najmniejsza(int a, int b, int c){
    if(a<=b && a<c){
        return a;
    }
    else if(b<=a && b<c){
        return b;
    }
    else{
        return c;
    }
}