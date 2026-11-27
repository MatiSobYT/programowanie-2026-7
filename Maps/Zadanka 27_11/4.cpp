#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main() {
    map <string, double> m;
    vector <string> v={"Mleko", "Jaja", "Ser", "Konserwa"};
    srand(time(NULL));
    for (int i=0; i<v.size(); i++) {
        double los=rand()%190+11;
        m.insert({v.at(i), los});
    }
    cout<<"Przed zmiana ceny: "<<endl;
    for (auto m2 : m) {
        cout<<m2.first<<" : "<<m2.second<<endl;
    }
    double los=rand()%4;
    m.at(v.at(los))=rand();
    cout<<"Po zmianie: "<<endl;
    for (auto m3 : m) {
        cout<<m3.first<<" : "<<m3.second<<endl;
    }
}