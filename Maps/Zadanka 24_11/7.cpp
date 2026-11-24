#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main() {
    srand(time(NULL));
    vector <string> v={"czerwony", "zielony", "niebieski", "zolty", "czarny"};
    map <string, int> m;
    int big=INT32_MIN;
    string ind_big;
    for (int i=0; i<100; i++) {
        int glos=rand()%5;
        if (m.contains(v.at(glos))) {
            m[v.at(glos)]++;
        }
        else {
            m.insert({v.at(glos), 1});
        }
    }
    for (auto m2 : m) {
        cout<<m2.first<<" : "<<m2.second<<endl;
        if (m2.second>big) {
            big=m2.second;
            ind_big=m2.first;
        }
    }
    cout<<"Zwyciezca: "<<ind_big<<" : "<<big<<" glosy";
}