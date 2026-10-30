#include <iostream> // Wersja zjebana
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
    for (int i=0; i<v.size(); i++) {
        licznikk=0;
        temp=v.at(i);
        for (int j=0; j<v.size(); j++) {
            if (v.at(j)==temp) {
                licznikk++;
            }
        }
        if (licznikk>licznik) {
            licznik=licznikk;
        }
    }
    cout<<"Dlugosc najdluzszego fragmentu wektora z jednakowymi znakami: "<<licznik; // Liczy ilosc wystapien najczestszego elementu w wektorze
}