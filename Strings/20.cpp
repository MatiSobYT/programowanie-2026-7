#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Podaj zdanie: ";
    getline(cin, s);
    string wynik="";
    string zobaczone=" ";
    int n=s.length();
    int i=0;
    while(i<n){
        while(i<n && s[i]==' '){
            i++;
        }
        if(i>=n){
            break;
        }
        int start=i;
        while(i<n && s[i]!=' '){
            i++;
        }
        string slowo=s.substr(start, i-start);
        string wzorzec=" "+slowo+" ";
        if(zobaczone.find(wzorzec)==string::npos){
            zobaczone+=slowo+" ";
            if(!wynik.empty()){
                wynik+=" ";
            }
            wynik+=slowo;
        }
    }
    cout<<wynik;
}