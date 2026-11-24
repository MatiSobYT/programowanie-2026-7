#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main() {
    map <string, int> m;
    vector <string> products={"monitor", "mysz", "klawiatura", "drukarka", "laptop"};
    srand(time(NULL));
    for (int i=0; i<products.size(); i++) {
        m.insert({products.at(i), rand()%20+11});
    }
    cout<<"Poczatkowy stan magazynu: "<<endl;
    for (auto m2 : m) {
        cout<<m2.first<<" : "<<m2.second<<endl;
    }
    cout<<endl;
    for (int i=0; i<20; i++) {
        int los=rand()%5;
        string prd=products.at(los);
        int l_sztuk=rand()%5+1;
        if (m.at(prd)<l_sztuk) {
            cout<<"Sprzedaz pominieta"<<endl;
        }
        else {
            m.at(prd)-=l_sztuk;
        }
    }
    cout<<endl;
    for (auto m2 : m) {
        cout<<m2.first<<" : "<<m2.second<<endl;
    }
}