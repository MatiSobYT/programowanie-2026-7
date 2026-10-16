#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> liczby;
    int temp, liczba, licznik=0;
    for (int i=0; i<6; i++) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        liczby.push_back(temp);
    }
    cout<<"Podaj ostatnia liczbe: ";
    cin>>liczba;
    for (int i=0; i<liczby.size(); i++) {
        if (liczba==liczby[i]) {
            licznik++;
        }
    }
    cout<<"Czy znajduje sie w vector: ";
    if (licznik>0) {
        cout<<"TAK";
    }
    else {
        cout<<"NIE";
    }
}