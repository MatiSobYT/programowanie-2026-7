#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> ciag;
    int S, temp, ind1=-1, ind2=-1;
    bool czyS=false;
    while (true) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if (temp!=-1) {
            ciag.push_back(temp);
        }
        else {
            break;
        }
    }
    cout<<"Podaj liczbe S: ";
    cin>>S;
    for (int i=0; i<ciag.size(); i++) {
        for (int j=0; j<ciag.size(); j++) {
            if (ciag[i]+ciag[j]==S) {
                czyS=true;
                ind1=i;
                ind2=j;
                break;
            }
        }
    }
    if (czyS==true) {
        cout<<"TAK, index["<<ind1<<"] i index["<<ind2<<"]";
    }
    else {
        cout<<"Nie ma takiej sytuacji";
    }
}