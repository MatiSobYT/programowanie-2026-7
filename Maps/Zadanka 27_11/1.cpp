#include <iostream>
#include <map>
using namespace std;
int main() {
    map <int, int> m;
    srand(time(NULL));
    for (int i=1; i<=5; i++) {
        m.insert({i, rand()%100+1});
    }
    cout<<"Przed zmiana: "<<endl;
    for (auto m2 : m) {
        cout<<m2.first<<" : "<<m2.second<<endl;
    }
    m.at(3)=rand();
    cout<<"Po zmianie: "<<endl;
    for (auto m3 : m) {
        cout<<m3.first<<" : "<<m3.second<<endl;
    }
}