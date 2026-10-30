#include <iostream>
#include <vector>
using namespace std;
int sumaIndeksowParzystych(vector<int> v);
int main() {
    vector<int> v;
    int temp;
    while (true) {
        cout<<"Podaj liczbe: ";
        cin>>temp;
        if (temp!=-1) {
            v.push_back(temp);
        }
        else {
            break;
        }
    }
    cout<<"Suma indeksow parzystych: "<<sumaIndeksowParzystych(v);
}
int sumaIndeksowParzystych(vector<int> v) {
    int sumapar=0;
    for (int i=0; i<v.size(); i+=2) {
        sumapar+=v.at(i);
    }
    return sumapar;
}