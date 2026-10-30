#include <iostream>
#include <vector>
using namespace std;
vector<int> zamien(vector<int> v, int a, int b);
int main(){
    int a, b, temp;
    vector<int> v, z;
    while(true){
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if(temp!=-1){
            v.push_back(temp);
        }
        else{
            break;
        }
    }
    cout<<"Podaj liczbe ktora chcesz zamienic: ";
    cin>>a;
    cout<<"Podaj na co chcesz ja zamienic: ";
    cin>>b;
    z=zamien(v, a, b);
    cout<<"Zamieniony wektor: "<<endl;
    for(int i=0; i<z.size(); i++){
        cout<<z.at(i)<<endl;
    }
}
vector<int> zamien(vector<int> v, int a, int b){
    vector<int> x;
    for(int i=0; i<v.size(); i++){
        if(v.at(i)==a){
            x.push_back(b);
        }
        else{
            x.push_back(v.at(i));
        }
    }
    return x;
}