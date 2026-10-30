#include <iostream>
#include <vector>
using namespace std;
vector<int> przesunWPrawo(vector<int> v);
int main() {
    vector<int> v, x;
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
    x=przesunWPrawo(v);
    cout<<"Wektor przesuniety w prawo o 1: "<<endl;
    for (int i=0; i<x.size(); i++) {
        cout<<x.at(i)<<" ";
    }
}
vector<int> przesunWPrawo(vector<int> v) {
    vector<int> z;
    z.push_back(v.back());
    for (int i=0; i<v.size()-1; i++) {
        z.push_back(v.at(i));
    }
    return z;
}