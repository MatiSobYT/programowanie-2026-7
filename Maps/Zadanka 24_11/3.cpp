#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main() {
    map <string, int> m;
    vector <string> owoce={"jablko", "gruszka", "banan", "kiwi", "sliwka"};
    srand(time(NULL));
    for (int i=0; i<40; i++) {
        int index=rand()%5;
        if (m.contains(owoce.at(index))) {
            m[owoce.at(index)]++;
        }
        else {
            m.insert({owoce.at(index), 1});
        }
    }
    for (auto wyst : m) {
        cout<<wyst.first<<" : "<<wyst.second<<endl;
    }
}