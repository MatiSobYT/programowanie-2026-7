#include <iostream>
#include <vector>
using namespace std;
int main() {
    int temp, k, licznik=0;
    vector<int> v;
    while (true) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if (temp!=0) {
            v.push_back(temp);
        }
        else {
            break;
        }
    }
    cout<<"Podaj liczbe k: ";
    cin>>k;
    for (int i=0; i<v.size(); i++) {
        if (v.at(i)==k) {
            licznik++;
        }
    }
    cout<<"Liczba k wystepuje w wektorze "<<licznik<<" razy";
}