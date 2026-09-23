#include <iostream>
using namespace std;
bool przestepny(int rok);
int main(){
    int rok;
    cout<<"Podaj rok: ";
    cin>>rok;
    if(przestepny(rok)==false){
        cout<<"Rok nie jest przestepny";
    }
    else{
        cout<<"Rok jest przestepny";
    }
}
bool przestepny(int rok){
    if(rok%4==0 && rok%100!=0){
        return true;
    }
    else if(rok%400==0){
        return true;                                   
    }
    else{
        return false;
    }
}