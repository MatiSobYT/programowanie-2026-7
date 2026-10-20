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
    for (int i=0; i<ciag.size(); i++) {
        for (int j=0; j<ciag.size(); j++) {
            for (int k=0; k<ciag.size(); k++) {
                if (i!=j && j!=k && i!=k){
                    suma=ciag[i]+ciag[j]+ciag[k];
                    if (suma>najsuma) {
                        najsuma=suma;
                        ind1=i;
                        ind2=j;
                        ind3=k;
                    }
                }
            }
        }
    }
    cout<<"Najwieksza suma: "<<najsuma<<" w index["<<ind1<<"], index["<<ind2<<"] i index["<<ind3<<"]";
}