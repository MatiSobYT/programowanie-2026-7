#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map <string, int> m;
    vector <string> v={"Pabianice", "Ksawerow", "Lodz", "Zgierz"};
    srand(time(NULL));
    for(int i=0; i<v.size(); i++){
        m.insert({v.at(i), rand()%40-10});
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<" stopni"<<endl;
    }
    int los=rand()%v.size();
    m.at(v.at(los))+=5;
    los=rand()%v.size();
    m.at(v.at(los))-=3;
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<" stopni"<<endl;
    }
}