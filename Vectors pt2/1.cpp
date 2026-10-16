#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> liczby;
    int temp, biggest, drugi;
    while (true) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if (temp==-1) {
            cout<<"Koniec danych"<<endl;
            break;
        }
        liczby.push_back(temp);
    }
    biggest=liczby[0];
    for (int i=0; i<liczby.size(); i++) {
        if (liczby[i]>biggest) {
            biggest=liczby[i];
        }
    }
    drugi=INT_MIN;
    for (int i=0; i<liczby.size(); i++) {
        if (liczby[i]>drugi && liczby[i]<biggest) {
            drugi=liczby[i];
        }
    }
    cout<<"Drugi najwiekszy: "<<drugi;
}