#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> ciag;
    int temp, suma=0, najsuma=0, ind1=-1, ind2=-1 ,ind3=-1;
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
    for (int i=0; i<ciag.size()-2; i++) {
        suma=ciag[i]+ciag[i+1]+ciag[i+2];
        if (suma>najsuma) {
            najsuma=suma;
            ind1=i;
            ind2=i+1;
            ind3=i+2;
        }
    }
    cout<<"Najwieksza suma: "<<najsuma<<" w index["<<ind1<<"], index["<<ind2<<"] i index["<<ind3<<"]";
}