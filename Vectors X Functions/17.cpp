#include <iostream>
#include <vector>
using namespace std;
bool czyNiemalejacy(vector<int> v);
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
    if (czyNiemalejacy(v)==true) {
        cout<<"Wektor jest niemalejacy";
    }
    else {
        cout<<"Wektor jest malejacy";
    }
}
bool czyNiemalejacy(vector<int> v) {
    int temp=v.at(0);
    for (int i=1; i<v.size(); i++) {
        if (temp>v.at(i)) {
            return false;
        }
        temp=v.at(i);
    }
    return true;
}