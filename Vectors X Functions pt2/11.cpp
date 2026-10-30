#include <iostream>
#include <vector>
using namespace std;
vector<int> wczytajWektor();
int main() {
    vector<int> v=wczytajWektor();
    cout<<"Liczba elementow wektora: "<<v.size();
}
vector<int> wczytajWektor(){
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
    return v;
}