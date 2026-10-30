#include <iostream>
#include <vector>
using namespace std;
vector<int> usunUjemne(vector<int> v);
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
    x=usunUjemne(v);
    cout<<"Wektor bez liczb ujemnych: "<<endl;
    for (int i=0; i<x.size(); i++) {
        cout<<x.at(i)<<" ";
    }
}
vector<int> usunUjemne(vector<int> v) {
    vector<int> z;
    for (int i=0; i<v.size(); i++) {
        if (v.at(i)>=0) {
            z.push_back(v.at(i));
        }
    }
    return z;
}