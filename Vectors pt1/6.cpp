#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> liczby;
    int temp, licznik=0;
    for (int i=0; i<7; i++) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        liczby.push_back(temp);
    }
    for (int i=0; i<liczby.size(); i++) {
        if (liczby[i]>0) {
            licznik++;
        }
    }
    cout<<"Liczba dodatnich: "<<licznik;
}