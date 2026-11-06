#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\dans.txt");
    int min=INT_MAX, max=INT_MIN;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            cout<<liczba<<endl;
            if (liczba>max) {
                max=liczba;
            }
            if (liczba<min) {
                min=liczba;
            }
        }
        file.close();
    }
    cout<<"Najmniejsza: "<<min<<endl;
    cout<<"Najwieksza: "<<max;
}