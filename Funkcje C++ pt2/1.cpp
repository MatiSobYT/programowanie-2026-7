#include <iostream>
using namespace std;
string linia();
int main(){
    cout<<linia();
}
string linia(){
    string myslnik;
    for(int i=1; i<=30; i++){
        myslnik=myslnik+"-";
    }
    return myslnik;
}