#include <iostream>
#include <vector>
using namespace std;
int main() {
    int temp, licznik=0, licznikk=0;
    vector<int> v;
    for (int i=0; i<12; i++) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        v.push_back(temp);
    }
    for (int j=1; j<v.size(); j++) {
        if (v.at(j)==v.at(j-1)) {
            licznikk++;
        }
        else{
            licznikk=1;
        }
    }
    if (licznikk>licznik) {
        licznik=licznikk;
    }
    cout<<"Dlugosc najdluzszego fragmentu wektora z jednakowymi znakami: "<<licznik;
}