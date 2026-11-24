#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    map <int, int> m;
    vector<int> v;
    srand(time(NULL));
    for (int i=0; i<30; i++) {
        v.push_back(rand()%10+1);
    }
    for (int i=0; i<v.size(); i++) {
        if (m.contains(v.at(i))) {
            m[v.at(i)]++;
        }
        else {
            m.insert({v.at(i), 1});
        }
    }
    for (auto ziomek : m) {
        cout<<ziomek.first<<" : "<<ziomek.second<<endl;
    }
}