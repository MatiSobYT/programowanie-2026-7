#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\liczbs.txt");
    int l_dod=0, l_uj=0, l_zer=0;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            cout<<liczba<<endl;
            if (liczba>0) {
                l_dod++;
            }
            else if (liczba<0) {
                l_uj++;
            }
            else {
                l_zer++;
            }
        }
        file.close();
    }
    cout<<"Liczba dodatnich: "<<l_dod<<endl;
    cout<<"Liczba ujemnych: "<<l_uj<<endl;
    cout<<"Liczba zer: "<<l_zer;
}