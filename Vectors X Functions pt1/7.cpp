#include <iostream>
#include <vector>
using namespace std;
vector<int> usunDuplikaty(vector<int> v);
int main() {
    vector<int> v, bezdup;
    int temp, n;
    cout<<"Podaj n: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"Podaj liczbe:";
        cin>>temp;
        v.push_back(temp);
    }
    bezdup=usunDuplikaty(v);
    cout<<"Odwrocony wektor:"<<endl;
    for (int i=0; i<bezdup.size(); i++) {
        cout<<bezdup[i]<<endl;
    }
}
vector<int> usunDuplikaty(vector<int> v) {
    vector<int> x;
    int n;
    bool obecnosc;
    x.push_back(v[0]);
    for (int i=1; i<v.size(); i++) {
        obecnosc=false;
        n=v[i];
        for (int j=0; j<x.size(); j++) {
            if (v[i]==x[j]) {
                obecnosc=true;
                break;
            }
        }
        if (obecnosc==false) {
            x.push_back(v[i]);
        }
    }
    return x;
}