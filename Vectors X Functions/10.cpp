#include <iostream>
#include <vector>
using namespace std;
int drugieNajwieksze(vector<int> v);
int main() {
    int n, temp;
    vector<int> v;
    cout<<"Podaj N: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"Drugie najwieksze rozne maksimum w wektorze: "<<drugieNajwieksze(v);
}
int drugieNajwieksze(vector<int> v) {
    int max=INT32_MIN, dwumax=INT32_MIN;
    if (v.size()<2) {
        return INT32_MIN;
    }
    for (int liczba : v) {
        if (liczba>max) {
            dwumax=max;
            max=liczba;
        }
        else if (liczba>dwumax && liczba<max) {
            dwumax=liczba;
        }
    }
    return dwumax;
}