#include <iostream>
#include <vector>
using namespace std;
vector<int> odwroc(vector<int> v);
int main() {
    vector<int> v, odwrocony;
    int temp, n;
    cout<<"Podaj n: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"Podaj liczbe:";
        cin>>temp;
        v.push_back(temp);
    }
    odwrocony=odwroc(v);
    cout<<"Odwrocony wektor:"<<endl;
    for (int i=0; i<odwrocony.size(); i++) {
        cout<<odwrocony[i]<<endl;
    }
}
vector<int> odwroc(vector<int> v) {
    vector<int> swap;
    for (int i=v.size()-1; i>=0; i--) {
        swap.push_back(v[i]);
    }
    return swap;
}