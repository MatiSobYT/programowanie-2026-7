#include <iostream>  //(i+k)%vector.size()
#include <vector>
using namespace std;
int main(){
    vector<int> liczby, liczby2;
    int temp, k, k2;
    while (true) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if (temp==-1) {
            cout<<"Koniec danych"<<endl;
            break;
        }
        liczby.push_back(temp);
    }
    cout<<"Podaj przesuniecie: ";
    cin>>k;
    for(int i=0; i<liczby.size(); i++){
        k2=(i+k)%liczby.size();
        liczby2.push_back(liczby[k2]);
    }
    for(int i=0; i<liczby2.size(); i++){
        cout<<liczby2[i]<<endl;
    }
}