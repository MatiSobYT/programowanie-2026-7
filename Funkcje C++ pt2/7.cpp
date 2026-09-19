#include <iostream>
using namespace std;
int naMinuty(int godziny);
int main(){
    int godziny;
    cout<<"Podaj liczbe godzin: ";
    cin>>godziny;
    if(godziny>4){
        cout<<godziny<<" godzin = ";
    }
    else if(godziny>1){
        cout<<godziny<<" godziny = ";
    }
    else{
        cout<<godziny<<" godzina = ";
    }
    cout<<naMinuty(godziny)<<" minut";
}
int naMinuty(int godziny){
    return godziny*60;
}