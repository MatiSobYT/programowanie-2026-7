#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main() {
    map <string, unsigned int> m;
    vector <string> v={"A1", "A2L", "P1S", "P3C", "R1"};
    srand(time(NULL));
    for (int i=0; i<v.size(); i++) {
        m.insert({v.at(i), rand()%50+1});
    }
    cout<<"Przed zmianami: "<<endl;
    for (auto m2 : m) {
        cout<<m2.first<<" : "<<m2.second<<endl;
    }
    int los=rand()%v.size();
    m.at(v.at(los))+=10;
    los=rand()%v.size();
    m.at(v.at(los))-=5;
    cout<<"Po: "<<endl;
    for (auto m3 : m) {
        cout<<m3.first<<" : "<<m3.second<<endl;
    }
}