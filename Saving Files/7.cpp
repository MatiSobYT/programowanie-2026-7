#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream plik("txt\\dziennik.txt", ios::app);
    plik<<endl<<"Dzisiaj nauczylem sie zapisywac dane do pliku ";
    plik.close();
}