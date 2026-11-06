#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    ifstream file("txt\\liczbz.txt");
    vector<int> v;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            v.push_back(liczba);
        }
        file.close();
    }
    for (int i=static_cast<int>(v.size() - 1); i>=0; i--) {
        cout<<v.at(i)<<" ";
    }
}