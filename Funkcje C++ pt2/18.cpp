#include <iostream>
using namespace std;
bool podzielnaPrzez5(int liczba);
int main(){
    int liczba;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    if(podzielnaPrzez5(liczba)==1){
        cout<<"Liczba jest podzielna przez 5";
    }
    else{
        cout<<"Liczba nie jest podzielna przez 5";
    }
}
bool podzielnaPrzez5(int liczba){
    if(liczba%5==0){
        return 1;
    }
    else{
        return 0;
    }
}