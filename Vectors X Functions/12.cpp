#include <iostream>
#include <vector>
using namespace std;
void wyswietlWektor(vector<int> v);
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
    wyswietlWektor(v);
}
void wyswietlWektor(vector<int> v) {
    for (int i=0; i<v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
}