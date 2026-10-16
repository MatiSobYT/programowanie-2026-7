#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> liczby;
    double temp, suma=0, srednia;
    for (int i=0; i<5; i++) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        liczby.push_back(temp);
    }
    for (int i=0; i<liczby.size(); i++) {
        suma+=liczby[i];
    }
    srednia=suma/liczby.size();
    cout<<"Srednia arytmetyczna: "<<srednia;
}