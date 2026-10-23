#include <iostream>
#include <vector>
using namespace std;
vector<int> polacz(vector<int> a, vector<int> b);
int main() {
    vector<int> v, x, y;
    int temp, n;
    cout<<"Podaj n: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"Podaj liczbe:";
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"Podaj drugie n: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"Podaj liczbe:";
        cin>>temp;
        x.push_back(temp);
    }
    y=polacz(v, x);
    cout<<"Polaczone wektory: "<<endl;
    for (int i=0; i<y.size(); i++) {
        cout<<y[i]<<endl;
    }
}
vector<int> polacz(vector<int> a, vector<int> b) {
    vector<int> z;
    for (int i=0; i<a.size(); i++) {
        z.push_back(a[i]);
    }
    for (int i=0; i<b.size(); i++) {
        z.push_back(b[i]);
    }
    return z;
}