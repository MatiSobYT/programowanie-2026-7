#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> ciag1, ciag2;
    int temp;
    while (true) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if (temp!=-1) {
            ciag1.push_back(temp);
        }
        else {
            break;
        }
    }
    for (int i=0; i<ciag1.size(); i++) {
        if (ciag1[i]%2==0) {
            ciag2.push_back(ciag1[i]);
        }
    }
    for (int i=0; i<ciag1.size(); i++) {
        if (ciag1[i]%2==1) {
            ciag2.push_back(ciag1[i]);
        }
    }
    for (int i=0; i<ciag2.size(); i++) {
        cout<<ciag2[i]<<endl;
    }
}