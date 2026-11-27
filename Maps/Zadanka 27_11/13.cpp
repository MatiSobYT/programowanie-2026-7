#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map <string, int> m;
    vector <string> v={"Myszka", "Klawiatura", "Sluchawki", "Monitor", "Glosniki", "GPU", "CPU", "RAM", "AIO", "PSU"}, w;
    int min=INT32_MAX, max=INT32_MIN;
    string nazwa, naz_max, naz_min;
    srand(time(NULL));
    while(m.size()<6){
        int los=rand()%v.size();
        m.insert({v.at(los), rand()%100+1});
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<endl;
        w.push_back(m2.first);
    }
    int los=rand()%w.size();
    m.at(w.at(los))+=rand()%20+1;
    los=rand()%w.size();
    m.at(w.at(los))-=rand()%10+1;
    if(m.at(w.at(los))<0){
        m.at(w.at(los))=0;
    }
    cout<<"Podaj nazwe nowego produktu: ";
    cin>>nazwa;
    m.insert({nazwa, rand()});
    cout<<"Wylosowano liczbe sztuk nowego produktu"<<endl;
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<endl;
        if(min>m3.second){
            min=m3.second;
            naz_min=m3.first;
        }
        if(max<m3.second){
            max=m3.second;
            naz_max=m3.first;
        }
    }
    cout<<"Najwiecej produktu: "<<naz_max<<":"<<max<<endl<<"Najmniej produktu: "<<naz_min<<":"<<min;
}