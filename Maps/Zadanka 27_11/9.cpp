#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map <string, int> m;
    vector <string> v={"Lew", "Tygrys", "Baboon", "Zebra"};
    srand(time(NULL));
    for(int i=0; i<v.size(); i++){
        m.insert({v.at(i), rand()%20+1});
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<" sztuk"<<endl;
    }
    int los=rand()%v.size();
    m.at(v.at(los))+=2;
    los=rand()%v.size();
    m.at(v.at(los))-=1;
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<" sztuk"<<endl;
    }
}