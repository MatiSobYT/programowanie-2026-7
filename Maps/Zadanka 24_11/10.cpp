#include <iostream>
#include <map>
using namespace std;
int main() {
    map <int, int> m1, m2, m3;
    srand(time(NULL));
    for (int i=1; i<=30; i++) {
        int los1=rand()%20+1, los2=rand()%20+1;
        m1[los1]++, m2[los2]++;
    }
    cout<<"Pierwsza mapa: "<<endl;
    for (auto z : m1) {
        cout<<z.first<<" : "<<z.second<<endl;
    }
    cout<<endl<<"Druga mapa: "<<endl;
    for (auto z2 : m2) {
        cout<<z2.first<<" : "<<z2.second<<endl;
    }
    cout<<endl;
    for (auto both : m1) {
        int l=both.first;
        if(m2.contains(l)){
            m3[l]=both.second+m2.at(l);
        }
    }
    cout<<"Elementy wystepujace w obu mapach: "<<endl;
    for (auto z4 : m3) {
        cout<<z4.first<<" : "<<z4.second<<" razy"<<endl;
    }
}