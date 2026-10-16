#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> liczby;
    int temp, licznik=0;
    while (true) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if (temp==-1) {
            cout<<"Koniec danych"<<endl;
            break;
        }
        liczby.push_back(temp);
    }
    for(int i=0; i<liczby.size(); i++){
        licznik=0;
        for(int j=0; j<liczby.size(); j++){
            if(liczby[j]==liczby[i]){
                licznik++;
            }
        }
        if(licznik==1){
            cout<<liczby[i]<<endl;
        }
    }
}