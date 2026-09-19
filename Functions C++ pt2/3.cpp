#include <iostream>
using namespace std;
void gwiazdki(int ile);
int main(){
    int ile;
    cout<<"Ile gwiazdek wypisac: ";
    cin>>ile;
    gwiazdki(ile);
}
void gwiazdki(int ile){
    string znak;
    for (int i=1; i<=ile; i++){
        znak=znak+"*";
    }
    cout<<znak;
}