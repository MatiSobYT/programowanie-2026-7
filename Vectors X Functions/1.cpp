#include <iostream>
#include <vector>
using namespace std;
int suma(vector<int> v);
int main() {
    vector<int> v;
    int temp, n;
    cout<<"Podaj n: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"Podaj liczbe:";
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"Suma elementow wektora: "<<suma(v);
}
int suma(vector<int> v) {
    int tmp=0;
    for (int i=0; i<v.size(); i++) {
        tmp+=v[i];
    }
    return tmp;
}