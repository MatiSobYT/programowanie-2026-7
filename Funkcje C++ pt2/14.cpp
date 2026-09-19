#include <iostream>
using namespace std;
bool pelnoletni(int wiek);
int main(){
    int wiek;
    cout<<"Podaj swoj wiek: ";
    cin>>wiek;
    if(pelnoletni(wiek)==1){
        cout<<"Jestes pelnoletni";
    }
    else{
        cout<<"Nie jestes pelnoletni";
    }
}
bool pelnoletni(int wiek){
    if(wiek>=18){
        return 1;
    }
    else{
        return 0;
    }
}