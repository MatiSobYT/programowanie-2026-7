#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map <string, double> m;
    vector <string> v={"Myszka", "Klawiatura", "Sluchawki", "Monitor", "Glosniki", "GPU", "CPU", "RAM"};
    string zmiana;
    double suma=0, srednia, cena, liczba=0;
    srand(time(NULL));
    while(m.size()<5){
        int los=rand()%v.size();
        m.insert({v.at(los), rand()%980+21});
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<"PLN"<<endl;
    }
    cout<<"Podaj nazwe produktu, ktora chcesz zmienic (case-sensitive): ";
    cin>>zmiana;
    m.at(zmiana)=rand();
    cout<<"Wylosowano nowa cene"<<endl;
    cout<<"Podaj nazwe nowego produktu (jeden wyraz): ";
    cin>>zmiana;
    cout<<"Podaj cene nowego produktu: ";
    cin>>cena;
    m.insert({zmiana, cena});
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<"PLN"<<endl;
        liczba++;
        suma+=m3.second;
    }
    srednia=suma/liczba;
    cout<<"Srednia cena wszystkich produktow: "<<srednia<<"PLN";
}