#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map <string, int> m;
    vector <string> v={"Bartol600", "MatiSobYT", "fran1uu", "Betclic", "Szutq", "Srubek", "dave", "Gray", "PioPro", "SplayFan"}, w;
    int top1=INT32_MIN, top2=INT32_MIN, top3=INT32_MIN;
    string ind1, ind2, ind3, nowy;
    srand(time(NULL));
    while(m.size()<5){
        int los=rand()%v.size();
        m.insert({v.at(los), rand()%1001});
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<endl;
        w.push_back(m2.first);
    }
    int los=rand()%m.size();
    m.at(w.at(los))+=rand()%190+11;
    cout<<"Podaj nazwe nowego gracza (single word): ";
    cin>>nowy;
    m.insert({nowy, rand()});
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<endl;
        if(top1<m3.second){
            top3=top2;
            ind3=ind2;
            top2=top1;
            ind2=ind1;
            top1=m3.second;
            ind1=m3.first;
        }
        else if(top2<m3.second){
            top3=top2;
            ind3=ind2;
            top2=m3.second;
            ind2=m3.first;
        }
        else if(top3<m3.second){
            top3=m3.second;
            ind3=m3.first;
        }
    }
    cout<<"Najwyzszy wynik: "<<ind1<<":"<<top1<<endl;
    cout<<"Drugie miejsce: "<<ind2<<":"<<top2<<endl;
    cout<<"Trzecie miejsce: "<<ind3<<":"<<top3;
}