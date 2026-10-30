#include <iostream>
#include <vector>
using namespace std;
int najdluzszyCiag(vector<int> v);
int main(){
    vector<int> v;
    int temp, ciag;
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
    ciag=najdluzszyCiag(v);
    cout<<"Najdluzszy ciag jednakowych znakow: "<<ciag;
}
int najdluzszyCiag(vector<int> v){
    int licznikmax=1, licznik=1;
    for (int j=1; j<v.size(); j++) {
        if (v.at(j)==v.at(j-1)) {
            licznik++;
        }
        else{
            licznik=1;
        }
        if (licznik>licznikmax) {
        licznikmax=licznik;
        }
    }
    return licznikmax;
}