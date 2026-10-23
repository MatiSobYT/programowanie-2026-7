#include <iostream>
#include <vector>
using namespace std;
int policzParzyste(vector<int> v);
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
    cout<<"Liczba elementow parzystych w wektorze: "<<policzParzyste(v);
}
int policzParzyste(vector<int> v) {
    int lpar=0;
    for (int i=0; i<v.size(); i++) {
        if (v[i]%2==0) {
            lpar++;
        }
    }
    return lpar;
}
