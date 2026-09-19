#include <iostream>
#include <climits>
using namespace std;
int main(){
    int liczba, min=INT32_MAX, max=0;
    double suma=0, ilosc=0;
    while (true){
        cout<<"Podaj liczbe: ";
        cin>>liczba;
        if (liczba==0){
            cout<<"Koniec danych"<<endl;
            break;
        }
        if (liczba<min){
            min=liczba;
        }
        if (liczba>max){
            max=liczba;
        }
        suma=suma+liczba;
        ilosc++;
    }
    cout<<"Minimum: "<<min<<endl;
    cout<<"Maximum: "<<max<<endl;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Srednia: "<<suma/ilosc;
}