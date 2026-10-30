#include <iostream>
#include <vector>
using namespace std;
int main() {
    int temp, licznik=0;
    double  suma=0, srednia;
    vector<int> v;
    for (int i=0; i<8; i++) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        v.push_back(temp);
    }
    for (int i=0; i<v.size(); i++) {
        suma+=v.at(i);
    }
    srednia=suma/8;
    cout<<"Srednia: "<<srednia<<endl;
    for (int i=0; i<v.size(); i++) {
        if (v.at(i)<srednia) {
            licznik++;
        }
    }
    cout<<"Liczba elementow mniejszych od sredniej: "<<licznik;
}