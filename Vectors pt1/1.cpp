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
        cout<<liczby[i]<<endl;
    }
}