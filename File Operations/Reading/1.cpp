#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream file("txt\\dane.txt");
    if (file.is_open()) {
        string text;
        while (getline(file, text)) {
            cout<<text<<endl;
        }
        file.close();
    }
}