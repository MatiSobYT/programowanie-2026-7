#include <iostream>
#include <map>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    map <int, int> m;
    vector<int> los;
    srand(time(NULL));
    for (int i=1; i<=100; i++) {
        los.push_back(rand()%100 + 1);
    }
    for (int i=0; i<los.size(); i++) {
        for (int j=los.at(i); j>0; j/=10) {
            int ost_cyfr=i%10;
            if (m.contains(ost_cyfr)) {
                m[ost_cyfr]++;
            }
            else {
                m.insert({ost_cyfr, 1});
            }
        }
    }
    for (auto histogram : m) {
        cout<<histogram.first<<" wystepuje: "<<histogram.second<<" razy"<<endl;
    }
}