#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main() {
    map <string, int> m;
    vector <string> v={"Bartol600", "MatiSobYT", "fran1uu", "Betclic"};
    srand(time(NULL));
    for (int i=0; i<v.size(); i++) {
        int los=rand()%501;
        m.insert({v.at(i), los});
    }
    cout<<"Przed zwiekszeniem losowego gracza o 50pkt: "<<endl;
    for (auto m2 : m) {
        cout<<m2.first<<" --> "<<m2.second<<endl;
    }
    int los=rand()%v.size();
    m.at(v.at(los))+=50;
    cout<<"Po bonusie: "<<endl;
    for (auto m3 : m) {
        cout<<m3.first<<" : "<<m3.second<<endl;
    }
}