#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> liczby;
    int temp, smallest;
    for (int i=0; i<6; i++) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        liczby.push_back(temp);
    }
    smallest=liczby[0];
    for (int i=0; i<liczby.size(); i++) {
        if (liczby[i]<smallest) {
            smallest=liczby[i];
        }
    }
    cout<<"Najmniejsza: "<<smallest;
}