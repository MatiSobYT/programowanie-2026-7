#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n;
    ofstream plik("txt\\liczby.txt");
    for (int i=0; i<5; i++) {
        cout<<"Podaj liczbe: ";
        cin>>n;
        plik<<n<<endl;
    }
    plik.close();
}