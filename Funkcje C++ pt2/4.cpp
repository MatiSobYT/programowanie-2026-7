#include <iostream>
using namespace std;
void powitanie(string imie);
int main(){
    string imie;
    cout<<"Podaj swoje imie: ";
    cin>>imie;
    powitanie(imie);
}
void powitanie(string imie){
    cout<<"Witaj, "<<imie<<"!";
}