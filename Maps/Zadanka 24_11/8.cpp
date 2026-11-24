#include <iostream>
#include <map>
using namespace std;
int main() {
    map <int, int> m;
    int big=INT32_MIN, ind_big;
    srand(time(NULL));
    for (int i=0; i<50; i++) {
        int zawodnik=rand()%10+1;
        int l_pkt=rand()%20+1;
        if (m.contains(zawodnik)) {
            m[zawodnik]+=l_pkt;
        }
        else {
            m.insert({zawodnik, l_pkt});
        }
    }
    for (auto m2 : m) {
        cout<<m2.first<<" : "<<m2.second<<endl;
        if (m2.second>big) {
            big=m2.second;
            ind_big=m2.first;
        }
    }
    cout<<"Najlepszy zawodnik: "<<ind_big<<" zdobyl punktow: "<<big;
}