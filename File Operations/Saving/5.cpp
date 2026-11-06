#include <fstream>
using namespace std;
int main() {
    ofstream plik("txt\\dane.txt", ios::trunc);
    plik<<"Poprzednie dane zostaly usuniete";
    plik.close();
}