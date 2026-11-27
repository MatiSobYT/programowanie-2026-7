#include <iostream>
#include <map>
using namespace std;
int main() {
    map <int, unsigned int> m;
    srand(time(NULL));
    for (int i=1; i<=5; i++) {
        m.insert({i, rand()%5});
    }
    cout<<"Przed zmianami: "<<endl;
    for (auto m2 : m) {
        cout<<m2.first<<" pokoj : "<<m2.second<<" osob"<<endl;
    }
    m.at(2)-=1;
    m.at(4)-=1;
    cout<<"Po zmianach: "<<endl;
    for (auto m3 : m) {
        cout<<m3.first<<" pokoj : "<<m3.second<<" osob"<<endl;
    }
}