#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main() {
    map <string, int> m, n;
    vector <string> v={"Mateusz", "Bartosz", "Franek", "Krzysztof", "Jan"}, x;
    srand(time(NULL));
    while(m.size()<3) {
        int los=rand()%5;
        string imie=v.at(los);
        m.insert({imie, rand()%70+11});
        x.push_back(imie);
    }
    cout<<"Przed podmiana: "<<endl;
    for (auto m2 : m) {
        cout<<m2.first<<" : "<<m2.second<<endl;
    }
    m.at(v.at(rand()%3))=rand();
    cout<<"Po podmiance: "<<endl;
    for (auto m3 : m) {
        cout<<m3.first<<" : "<<m3.second<<endl;
    }
}