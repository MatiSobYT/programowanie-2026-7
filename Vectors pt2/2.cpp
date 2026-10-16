#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> liczby;
    int temp;
    bool ist=false;
    while (true) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if (temp==-1) {
            cout<<"Koniec danych"<<endl;
            break;
        }
        liczby.push_back(temp);
    }
    vector<int> liczby2;
    for(int i=0; i<liczby.size(); i++){
        ist=false;
        for(int j=0; j<liczby2.size(); j++){
            if(liczby2[j]==liczby[i]){
                ist=true;
                break;
            }
        }
        if(ist==false){
            liczby2.push_back(liczby[i]);
        }
    }
    for(int i=0; i<liczby2.size(); i++){
        cout<<liczby2[i]<<endl;
    }
}