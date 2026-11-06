#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\liczbs.txt");
    int l_liczb=0, s_liczb=0, srednia, l_ponad=0;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            l_liczb++;
            s_liczb+=liczba;
        }
        file.close();
    }
    srednia=s_liczb/l_liczb;
    ifstream filed("txt\\liczbs.txt");
    if (filed.is_open()) {
        int liczba;
        while (filed>>liczba) {
            if (liczba>srednia) {
                l_ponad++;
            }
        }
        filed.close();
    }
    cout<<"Srednia elementow: "<<srednia<<endl;
    cout<<"Liczba elementow wyzszych od sredniej: "<<l_ponad;
}