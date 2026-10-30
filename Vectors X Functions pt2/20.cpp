#include <iostream>
#include <vector>
using namespace std;
vector<int> wspolneElementy(vector<int> a, vector<int> b);
int main(){
    int temp;
    vector<int> a, b, c;
    cout<<"Pierwszy wektor: "<<endl;
    while(true){
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if(temp!=-1){
            a.push_back(temp);
        }
        else{
            break;
        }
    }
    cout<<"Drugi wektor: "<<endl;
    while(true){
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if(temp!=-1){
            b.push_back(temp);
        }
        else{
            break;
        }
    }
    c=wspolneElementy(a, b);
    cout<<"Wspolne elementy obu wektorow: "<<endl;
    for(int i=0; i<c.size(); i++){
        cout<<c.at(i)<<' ';
    }
}
vector<int> wspolneElementy(vector<int> a, vector<int> b){
    vector<int> z;
    bool byc;
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a.at(i)==b.at(j)){
                byc=false;
                for(int k=0; k<z.size(); k++){
                    if(z.at(k)==a.at(i)){
                        byc=true;
                        break;
                    }
                }
                if(byc==false){
                    z.push_back(a.at(i));
                }
            }
        }
    }
    return z;
}