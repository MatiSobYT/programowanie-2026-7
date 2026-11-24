#include <iostream>
#include <map>
using namespace std;
int main() {
    map <int, int> m;
    srand(time(NULL));
    for (int i=1; i<=15; i++) {
        m.insert({i, rand()%101});
    }
    for (auto mapka : m) {
        if (mapka.second>=50) {
            cout<<mapka.first<<" : "<<mapka.second<<endl;
        }
    }
}