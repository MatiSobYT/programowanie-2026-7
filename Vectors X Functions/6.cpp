#include <iostream>
#include <vector>
using namespace std;
double srednia(vector<int> v);
int main() {
    vector<int> v;
    int temp;
    for (int i=0; i<10; i++) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"Srednia arytmetyczna elementow wektora: "<<srednia(v);
}
double srednia(vector<int> v) {
    double suma=0;
    for (int i=0; i<v.size(); i++) {
        suma+=v[i];
    }
    return suma/10;
}
