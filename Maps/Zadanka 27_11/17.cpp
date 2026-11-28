#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map <string, int> m, n;
    vector <string> v={"Diuna", "Lod", "Solaris", "Neuromancer", "Ubik", "Fiasco", "Metro", "Klamca", "Silmarillion", "Zew"}, w;
    string neue;
    srand(time(NULL));
    while(m.size()<6){
        int los=rand()%v.size();
        m.insert({v.at(los), rand()%20+1});
        w.push_back(v.at(los));
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<endl;
    }
    int los=rand()%m.size();
    m.at(w.at(los))+=rand()%5+1;
    los=rand()%m.size();
    m.at(w.at(los))-=1;
    if(m.at(w.at(los))<0){
        m.at(w.at(los))=0;
    }
    cout<<"Podaj nazwe nowej ksiazki (single-word): ";
    cin>>neue;
    m.insert({neue, rand()});
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<endl;
        if(m3.second<3){
            n.insert({m3.first, m3.second});
        }
    }
    cout<<"Wszystkie ksiazki ponizej 3 egzemplarzy: "<<endl;
    for(auto n2:n){
        cout<<n2.first<<":"<<n2.second<<endl;
    }
}