#include <iostream>
#include <map>
using namespace std;
int main(){
    map <int, bool> m;
    int wybor, pust=0, zaj=0;
    bool wbr;
    srand(time(NULL));
    for(int i=1; i<=10; i++){
        m.insert({i, static_cast<bool>(rand()%2)});
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        if(m2.second){
            cout<<"Pokoj nr "<<m2.first<<" jest zajety"<<endl;
        }
        else{
            cout<<"Pokoj nr "<<m2.first<<" jest pusty"<<endl;
        }
    }
    cout<<"Wybierz nr pokoju do zmiany (1-10): ";
    cin>>wybor;
    cout<<"Zajety/Pusty -> 1/0"<<endl;
    cout<<"Podaj: ";
    cin>>wbr;
    m.at(wybor)=wbr;
    cout<<"Podaj nr nowego pokoju (poza 1-10): ";
    cin>>wybor;
    m.insert({wybor, static_cast<bool>(rand()%2)});
    cout<<"Po: "<<endl;
    for(auto m3:m){
        if(m3.second){
            cout<<"Pokoj nr "<<m3.first<<" jest zajety"<<endl;
            zaj++;
        }
        else{
            cout<<"Pokoj nr "<<m3.first<<" jest pusty"<<endl;
            pust++;
        }
    }
    cout<<"Liczba pustych pokoi: "<<pust<<endl;
    cout<<"Liczba zajetych pokoi: "<<zaj;
}