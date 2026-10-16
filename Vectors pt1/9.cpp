#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> liczby;
    int temp;
    for (int i=0; i<5; i++) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        liczby.push_back(temp);
    }
    for (int i=0; i<liczby.size(); i++) {
        liczby[i]+=2;
        cout<<liczby[i]<<endl;
    }
}