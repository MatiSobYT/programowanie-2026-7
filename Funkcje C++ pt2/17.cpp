#include <iostream>
using namespace std;
int ostatniaCyfra(int liczba);
int main(){
    int liczba;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    cout<<"Ostatnia cyfra: "<<ostatniaCyfra(liczba);
}
int ostatniaCyfra(int liczba){
    return liczba%10;
}