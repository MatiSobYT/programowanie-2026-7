#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map <string, int> m;
    vector <string> v={"Bartosz", "Franek", "Jan", "Krzysztof", "Mateusz"};
    int i=0, x, y, max=INT32_MIN;
    string imie;
    srand(time(NULL));
    while(m.size()<5){
        m.insert({v.at(i), rand()%5+1});
        i++;
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<endl;
    }
    cout<<"Wybierz ucznia (indeksowane 0-4, kolejnosc alfabetyczne): ";
    cin>>x;
    cout<<"Wybrano ucznia: "<<v.at(x)<<endl<<"Jaka ocena: ";
    g:
    cin>>y;
    if(y<1 || y>6){
        cout<<"Bledne dane, sprobuj ponownie: ";
        goto g;
    }
    else{
        m.at(v.at(x))=y;
    }
    cout<<"Podaj imie nowego ucznia: ";
    cin>>imie;
    m.insert({imie, rand()%5+1});
    cout<<"Wylosowano ocene dla nowego ucznia"<<endl;
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<endl;
        if(m3.second>max){
            max=m3.second;
            imie=m3.first;
        }
    }
    cout<<"Uczen z najwyzsza ocena: "<<imie<<":"<<max;
}