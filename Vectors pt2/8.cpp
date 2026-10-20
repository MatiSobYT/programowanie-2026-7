#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> ciag;
    int temp, najczestsza=0, licznik=0, max=0;
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
    for (int i=0; i<ciag.size(); i++) {
        licznik=0;
        for (int j=0; j<ciag.size(); j++) {
            if (ciag[i]==ciag[j]) {
                licznik++;
            }
        }
        if (licznik>max || licznik==max && ciag[i]<najczestsza) {
            max=licznik;
            najczestsza=ciag[i];
        }
    }
    cout<<"Najczestsza liczba: "<<najczestsza<<endl<<"Liczba wystapien: "<<max;
}