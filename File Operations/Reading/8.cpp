#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream file("txt\\tekss.txt");
    int l_znak=0, l_a=0, l_spacji=0;
    if (file.is_open()) {
        string tekst;
        while (getline(file, tekst)) {
            for (int i=0; i<tekst.length(); i++) {
                char znak=tekst.at(i);
                cout<<znak<<endl;
                if (znak==' ') {
                    l_spacji++;
                }
                else if (znak=='a' || znak=='A') {
                    l_a++;
                    l_znak++;
                }
                else {
                    l_znak++;
                }
            }
        }
        file.close();
    }
    cout<<"Liczba znakow: "<<l_znak<<endl;
    cout<<"Liczba a/A: "<<l_a<<endl;
    cout<<"Liczba spacji: "<<l_spacji;
}