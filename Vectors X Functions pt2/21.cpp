#include <iostream>
#include <vector>
using namespace std;
vector<int> rozniceSasiadow(vector<int> v);
int main(){
    int temp;
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
    z=rozniceSasiadow(v);
    cout<<"Roznice sasiadow: "<<endl;
    for(int i=0; i<z.size(); i++){
        cout<<z.at(i)<<endl;
    }
}
vector<int> rozniceSasiadow(vector<int> v){
    vector<int> x;
    if(v.size()<2){
        return x;
    }
    int roznica;
    for(int i=0; i<v.size()-1; i++){
        roznica=abs(v.at(i)-v.at(i+1));
        x.push_back(roznica);
    }
    return x;
}