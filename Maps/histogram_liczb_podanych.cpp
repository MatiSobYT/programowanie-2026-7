#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int, int> m;
    int liczba;
    while (true) {
        cout<<"Podaj liczbe: ";
        cin>>liczba;
        if (liczba==0) {
            cout<<endl;
            break;
        }
        else {
            if (m.contains(liczba)) {
                m[liczba]++;
            }
            else {
                m.insert({liczba, 1});
            }
        }
    }
    for (auto histogram : m) {
        cout<<histogram.first<<" wystepuje: "<<histogram.second<<" razy"<<endl;
    }
}