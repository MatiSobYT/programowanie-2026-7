#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    map <int, int> m;
    vector <int> v;
    srand(time(NULL));
    for (int i=1; i<=40; i++) {
        m.insert({i, rand()%20+1});
    }
    for (const auto mister : m) {
        cout<<mister.first<<" : "<<mister.second<<endl;
        if (mister.second==1) {
            v.push_back(mister.first);
        }
    }
    for (int i=0; i<v.size(); i++) {
            m.erase(v.at(i));
    }
    cout<<endl;
    for (auto m2 : m) {
        cout<<m2.first<<" : "<<m2.second<<endl;
    }
}