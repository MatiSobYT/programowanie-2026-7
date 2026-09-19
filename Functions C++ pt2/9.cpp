#include <iostream>
using namespace std;
int naCentymetry(int metry);
int main(){
    int metry;
    cout<<"Podaj liczbe metrow: ";
    cin>>metry;
    cout<<metry<<"m = "<<naCentymetry(metry)<<"cm";
}
int naCentymetry(int metry){
    return metry*100;
}