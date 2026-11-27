#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map <string, double> m;
    vector <string> v={"Mateusz", "Bartosz", "Franek", "Krzysztof", "Jan", "Szymon", "Piotr", "Gabriel"};
    double suma=0, max=INT32_MIN;
    string imie, klient;
    srand(time(NULL));
    while(m.size()<5){
        int los=rand()%v.size();
        m.insert({v.at(los), rand()%9900+101});
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<"PLN"<<endl;
    }
    int los=rand()%m.size();
    m.at(v.at(los))+=rand()%450+51;
    los=rand()%m.size();
    m.at(v.at(los))-=rand()%280+21;
    if(m.at(v.at(los))<0){
        m.at(v.at(los))=0; //abs(m.at(v.at(los)));
    }
    cout<<"Podaj imie nowego klienta: ";
    cin>>imie;
    m.insert({imie, rand()});
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<"PLN"<<endl;
        suma+=m3.second;
        if(m3.second>max){
            max=m3.second;
            klient=m3.first;
        }
    }
    cout<<"Klient z najwiekszym saldem: "<<klient<<":"<<max<<"PLN"<<endl;
    cout<<"Suma sald na wszystkich kontach: "<<suma<<"PLN";
}