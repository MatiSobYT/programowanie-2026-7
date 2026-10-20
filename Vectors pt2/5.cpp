#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> ciag;
    int temp, najdluzszy=1, aktualny=1;
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
    for (int i=1; i<ciag.size(); i++) {
        if (ciag[i]>ciag[i-1]) {
            aktualny++;
        }
        else {
            if (aktualny>najdluzszy) {
                najdluzszy=aktualny;
            }
            aktualny=1;
        }
    }
    if (aktualny>najdluzszy) {
        najdluzszy=aktualny;
    }
    cout<<najdluzszy<<endl;
}