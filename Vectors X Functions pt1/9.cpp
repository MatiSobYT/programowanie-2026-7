#include <iostream>
#include <vector>
using namespace std;
vector<int> wiekszeOd(vector<int> v, int x);
int main() {
    int temp, x;
    vector<int> v, z;
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
    cout<<"Podaj X: ";
    cin>>x;
    cout<<"Wektor z l. wiekszymi od X: "<<endl;
    z=wiekszeOd(v, x);
    for (int i=0; i<z.size(); i++) {
        cout<<z.at(i)<<endl;
    }
}
vector<int> wiekszeOd(vector<int> v, int x) {
    vector<int> z;
    for (int i=0; i<v.size(); i++) {
        if (v.at(i)>x) {
            z.push_back(v.at(i));
        }
    }
    return z;
}