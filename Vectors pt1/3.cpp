#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> liczby;
    int temp, biggest;
    for (int i=0; i<6; i++) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        liczby.push_back(temp);
    }
    biggest=liczby[0];
    for (int i=0; i<liczby.size(); i++) {
        if (liczby[i]>biggest) {
            biggest=liczby[i];
        }
    }
    cout<<"Najwieksza: "<<biggest;
}