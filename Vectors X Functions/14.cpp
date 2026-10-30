#include <iostream>
#include <vector>
using namespace std;
int policzWystapienia(vector<int> v, int x);
int main() {
    vector<int> v;
    int x, temp;
    while (true) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if (temp!=-1) {
            v.push_back(temp);
        }
        else {
            break;
        }
    }
    cout<<"Podaj X: ";
    cin>>x;
    cout<<"X wystepuje w wektorze: "<<policzWystapienia(v, x)<<" razy";
}
int policzWystapienia(vector<int> v, int x) {
    int licznik=0;
    for (int i=0; i<v.size(); i++) {
        if (v.at(i)==x) {
            licznik++;
        }
    }
    return licznik;
}