#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map <string, double> m;
    vector <string> v={"Warszawa", "Berlin", "Praga", "Wieden", "Rzym", "Madryt", "Paryz", "Lizbona", "Oslo", "Sztokholm"}, w;
    double max=INT32_MIN, min=INT32_MAX;
    string d_max, d_min, str;
    srand(time(NULL));
    while(m.size()<6){
        int los=rand()%v.size();
        m.insert({v.at(los), rand()%51-15});
        w.push_back(v.at(los));
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<" stopni"<<endl;
    }
    int los=rand()%m.size();
    m.at(w.at(los))+=5-rand()%11;
    cout<<"Podaj nazwe nowego miasta (single-word): ";
    cin>>str;
    m.insert({str, rand()});
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<" stopni"<<endl;
        if(m3.second>max){
            max=m3.second;
            d_max=m3.first;
        }
        if(m3.second<min){
            min=m3.second;
            d_min=m3.first;
        }
    }
    cout<<"Miasto najcieplejsze: "<<d_max<<":"<<max<<" stopni"<<endl;
    cout<<"Miasto najzimniejsze: "<<d_min<<":"<<min<<" stopni";
}