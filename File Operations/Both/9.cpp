#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\oceny.txt");
    int l_ndst=0, l_dop=0, l_dst=0, l_db=0, l_bdb=0, l_cel=0;
    if (file.is_open()) {
        int liczba;
        while (file>>liczba) {
            if (liczba==1) {
                l_ndst++;
            }
            else if (liczba==2){
                l_dop++;
            }
            else if (liczba==3) {
                l_dst++;
            }
            else if (liczba==4) {
                l_db++;
            }
            else if (liczba==5) {
                l_bdb++;
            }
            else if (liczba==6) {
                l_cel++;
            }
            else {
                cout<<"Wykryto bledne dane";
            }
        }
        file.close();
    }
    cout<<"Liczba ocen 1: "<<l_ndst<<endl;
    cout<<"Liczba ocen 5: "<<l_bdb<<endl;
    cout<<"Liczba ocen 6: "<<l_cel;
}