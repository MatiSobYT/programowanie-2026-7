#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main() {
    map <string, int> m;
    vector <string> products={"chleb", "mleko", "maslo", "ser", "sok", "makaron"};
    int suma=0;
    srand(time(NULL));
    for (int i=0; i<products.size(); i++) {
        m.insert({products.at(i), rand()%23+3});
    }
    for (auto ceny : m) {
        suma+=ceny.second;
        cout<<ceny.first<<" : "<<ceny.second<<" zl"<<endl;
    }
    cout<<"Laczna cena produktow: "<<suma<<" zl";
}