#include <fstream>
using namespace std;
int main() {
    ofstream plik("txt\\tekst.txt");
    plik<<"Ucze sie programowac w C++";
    plik.close();
}