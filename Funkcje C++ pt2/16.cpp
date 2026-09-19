#include <iostream>
using namespace std;
int znakLiczby(int liczba);
int main(){
    int liczba;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    cout<<"Znak: "<<znakLiczby(liczba);
}
int znakLiczby(int liczba){
    if(liczba<0){
        return -1;
    }
    else if(liczba>0){
        return 1;
    }
    else{
        return 0;
    }
}