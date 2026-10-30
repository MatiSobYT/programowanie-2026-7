#include <iostream>
#include <vector>
using namespace std;
int indeksMinimum(vector<int> v);
int main() {
    vector<int> v;
    int temp;
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
    cout<<"Indeks najmniejszego elementu: "<<indeksMinimum(v);
}
int indeksMinimum(vector<int> v) {
    int najmn=INT_MAX, ret;
    for (int i=0; i<v.size(); i++) {
        if (v.at(i)<najmn) {
            najmn=v.at(i);
            ret=i;
        }
    }
    return ret;
}