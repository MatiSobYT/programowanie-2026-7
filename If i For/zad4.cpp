#include <iostream>
using namespace std;
int main(){
    int wiek;
    cout<<"Podaj wiek: ";
    cin>>wiek;
    cout<<endl;
    if (wiek>17){
        cout<<"Mozesz wejsc";
    }
    else {
        cout<<"Nie mozesz wejsc, brakuje ci "<<(18-wiek)<<" lat.";
    }
    return 0;
}