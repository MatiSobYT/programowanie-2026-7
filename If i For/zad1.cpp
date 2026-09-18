#include <iostream>
using namespace std;
int main(){
    int liczba;
    cout<<"Podaj liczbe calkowita: ";
    cin>>liczba;
    cout<<endl;
    if (liczba % 2 == 0){
        cout<<"Liczba jest parzysta";
    }
    else {
        cout<<"Liczba jest nieparzysta";
    }
    return 0;
}