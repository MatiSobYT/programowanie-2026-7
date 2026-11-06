#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\danr.txt");
    ofstream dod("txt\\dodatnie.txt");
    ofstream uj("txt\\ujemne.txt");
    int l_dod=0, l_uj=0;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            if (liczba>0) {
                l_dod++;
                dod<<liczba;
            }
            else if (liczba<0) {
                l_uj++;
                uj<<liczba;
            }
            else {
                cout<<"Zero pominiete"<<endl;
            }
        }
        file.close();
        dod.close();
        uj.close();
    }
    cout<<"Liczb dodatnich: "<<l_dod<<endl;
    cout<<"Liczb ujemnych: "<<l_uj;
}