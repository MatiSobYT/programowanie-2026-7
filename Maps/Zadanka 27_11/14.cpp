#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map <string, string> m;
    vector <string> v={"Mateusz Kowalski", "Bartosz Nowak", "Franek Wisniewski", "Krzysztof Zielinski", "Jan Kaminski", "Tomasz Lewandowski", "Piotr Wojcik", "Jakub Kaczmarek"}, w;
    string im_nz, nr;
    srand(time(NULL));
    while(m.size()<5){
        nr="";
        for(int i=0; i<9; i++){
            int nrek=rand()%10;
            nr.push_back(static_cast<char>('0'+nrek));
        }
        int los=rand()%v.size();
        m.insert({v.at(los), nr});
        w.push_back(v.at(los));
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<endl;
    }
    cout<<"Podaj imie i nazwisko osoby do zmiany numeru (case-sensitive, with space): ";
    getline(cin, im_nz);
    nr="";
    for(int i=0; i<9; i++){
            int nrek=rand()%10;
            nr.push_back(static_cast<char>('0'+nrek));
    }
    m.at(im_nz)=nr;
    cout<<"Podaj imie i nazwisko osoby do dodania: ";
    getline(cin, im_nz);
    nr="";
    for(int i=0; i<9; i++){
            int nrek=rand()%10;
            nr.push_back(static_cast<char>('0'+nrek));
    }
    m.insert({im_nz, nr});
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<endl;
    }
    int los=rand()%w.size();
    im_nz=w.at(los);
    cout<<"Bonus losowa osoba: "<<im_nz<<":"<<m.at(im_nz);
}