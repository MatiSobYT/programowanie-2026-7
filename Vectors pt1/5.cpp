#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> liczby;
    int temp;
    for (int i=0; i<8; i++) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        liczby.push_back(temp);
    }
    for (int i=0; i<liczby.size(); i++) {
        if (liczby[i]%2==0) {
            cout<<liczby[i]<<endl;
        }
    }
}