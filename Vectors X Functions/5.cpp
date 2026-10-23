#include <iostream>
#include <vector>
using namespace std;
bool czyZawiera(vector<int> v, int x);
int main() {
    vector<int> v;
    int temp, n, x;
    cout<<"Podaj n: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"Podaj liczbe:";
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"Podaj szukana liczbe: ";
    cin>>x;
    if (czyZawiera(v, x)==true) {
        cout<<"Wektor zawiera ta liczbe";
    }
    else {
        cout<<"Wektor nie zawiera tej liczby";
    }
}
bool czyZawiera(vector<int> v, int x) {
    bool tmp=false;
    for (int i=0; i<v.size(); i++) {
        if (v[i]==x) {
            tmp=true;
            break;
        }
    }
    return tmp;
}