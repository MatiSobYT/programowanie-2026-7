#include <iostream>
using namespace std;
int naSekundy(int minuty);
int main(){
    int minuty;
    cout<<"Podaj liczbe minut: ";
    cin>>minuty;
    if(minuty>4){
    cout<<minuty<<" minut = ";
    }
    else if(minuty>1){
        cout<<minuty<<" minuty = ";
    }
    else{
        cout<<minuty<<" minuta = ";
    }
    cout<<naSekundy(minuty)<<" sekund";
}
int naSekundy(int minuty){
    return minuty*60;
}