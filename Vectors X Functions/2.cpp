#include <iostream>
#include <vector>
using namespace std;
int maksimum(vector<int> v);
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
    cout<<"Najwiekszy element wektora: "<<maksimum(v);
}
int maksimum(vector<int> v) {
    int big=v[0];
    for (int i=1; i<v.size(); i++) {
        if (v[i]>big) {
            big=v[i];
        }
    }
    return big;
}