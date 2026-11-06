#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("txt\\tekst.txt");
    if (file.is_open()) {
        int liczba_w=0;
        string text;
        while (getline(file, text)) {
            liczba_w++;
        }
        file.close();
        cout<<"Liczba wierszy: "<<liczba_w;
    }
}