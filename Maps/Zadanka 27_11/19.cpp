#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map <string, int> m, n;
    vector <string> v={"Volvo", "Volkswagen", "Audi", "Mitsubishi", "Opel", "Renault", "Iveco", "Saab", "Scania", "Fiat"}, w;
    string ziomek;
    srand(time(NULL));
    while(m.size()<5){
        int los=rand()%v.size();
        m.insert({v.at(los), rand()%27+2000});
        w.push_back(v.at(los));
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<endl;
    }
    int los=rand()%m.size();
    m.at(w.at(los))=rand()%2027;
    cout<<"Podaj marke nowego samochodu (single-word): ";
    cin>>ziomek;
    m.insert({ziomek, rand()%2027});
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<endl;
        if(m3.second>2015){
            n.insert({m3.first, m3.second});
        }
    }
    cout<<"Lista samochodow wyprodukowanych po 2015 roku: "<<endl;
    for(auto n2:n){
        cout<<n2.first<<":"<<n2.second<<endl;
    }
}