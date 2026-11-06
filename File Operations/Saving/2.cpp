#include <fstream>
using namespace std;
int main() {
    ofstream plik("txt\\wiadomosc.txt");
    plik<<"Dzisiaj jest piekny dzien"<<endl<<"Ucze sie jezyka C++"<<endl<<"Potrafie zapisywac dane do pliku";
    plik.close();
}