#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main() {
    map <string, int> m;
    vector <string> v={"Mateusz", "Bartosz", "Franek", "Krzysztof", "Jan", "Szymon"};
    srand(time(NULL));
    while(m.size()<4) {
        int los=rand()%v.size();
        m.insert({v.at(los), rand()%7});
    }
    cout<<"Przed: "<<endl;
    for (auto m2 : m) {
        cout<<m2.first<<" : "<<m2.second<<endl;
    }
    int los=rand()%v.size();
    m.at(v.at(los))=rand();
    cout<<"Po: "<<endl;
    for (auto m3 : m) {
        cout<<m3.first<<" : "<<m3.second<<endl;
    }
}