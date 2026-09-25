#include <iostream>
using namespace std;
bool poprawneHaslo(int haslo);
int main() {
    int haslo;
    cout<<"Podaj haslo cyfrowe: ";
    cin>>haslo;
    if (poprawneHaslo(haslo)==true) {
        cout<<"Haslo poprawne";
    }
    else {
        cout<<"Haslo niepoprawne";
    }
}
bool poprawneHaslo(int haslo) {
    int licznik=1;
    for (int i=haslo; i>9; i=i/10) {
        licznik++;
    }
    if (licznik>=8) {
        for (int i=licznik; i>0; i--) {
            int temp=haslo%10;
            int l2=1;
            for (int j=haslo/10; j>0; j=j/10) {
                if (temp==j%10) {
                    l2++;
                }
            }
            if (l2>1) {
                return false;
            }
            else {
                haslo=haslo/10;
            }
        }
        return true;
    }
    else {
        return false;
    }
}