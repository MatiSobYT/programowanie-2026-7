#include <iostream>
#include <map>
using namespace std;
int main() {
    map <int, int> m;
    int big=INT32_MIN, ind_big;
    srand(time(NULL));
    for (int i=0; i<50; i++) {
        int liczba=rand()%15+1;
        if (m.contains(liczba)) {
            m[liczba]++;
        }
        else {
            m.insert({liczba, 1});
        }
    }
    for (auto majster : m) {
        if (majster.second>big) {
            big=majster.second;
            ind_big=majster.first;
        }
    }
    cout<<"Najczesciej wystepujaca liczba: "<<ind_big<<" : "<<big<<" razy";
}