#include <iostream>
#include <map>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    map <int, int> m;
    srand(time(NULL));
    for (int i=1; i<=40; i++) {
        m.insert({i, rand()%20+1});
    }
    for (const auto mister : m) {
        cout<<mister.first<<" : "<<mister.second<<endl;
        // if (mister.second==1) {
        //     m.erase(mister.first); ---Rudy mowi ze RAM corrupt compiler wywala dissasembly spytam ghosta w petek
        // }
    }
    cout<<endl;
    for (auto m2 : m) {
        cout<<m2.first<<" : "<<m2.second<<endl;
    }
}