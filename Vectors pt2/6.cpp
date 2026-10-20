#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> ciag1, ciag2;
    int temp, suma=0;
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
    for (int i=0; i<ciag1.size(); i=i+2) {
        suma=ciag1[i]+ciag1[i+1];
        ciag2.push_back(suma);
    }
    for (int i=0; i<ciag2.size(); i++) {
        cout<<ciag2[i]<<endl;
    }
}