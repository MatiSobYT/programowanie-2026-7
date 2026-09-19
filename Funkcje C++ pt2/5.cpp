#include <iostream>
#include <ctime>
using namespace std;
int rokUrodzenia(int wiek);
int main(){
    int wiek;
    cout<<"Podaj swoj wiek: ";
    cin>>wiek;
    cout<<"Przyblizony rok urodzenia: "<<rokUrodzenia(wiek);
}
int rokUrodzenia(int wiek){
    time_t teraz=time(nullptr);
    tm* czas=localtime(&teraz);
    return 1900+czas->tm_year-wiek;
}