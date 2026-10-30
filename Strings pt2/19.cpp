#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int k;
    cout<<"Podaj napis: ";
    cin>>s;
    cout<<"Podaj przesuniecie: ";
    cin>>k;
    k=k%26;
    for(int i=0; i<s.length(); i++){
        s[i]=(s[i]-'a'+k)%26+'a';
    }
    cout<<s;
}