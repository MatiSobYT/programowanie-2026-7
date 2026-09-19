#include <iostream>
using namespace std;
void naglowek();
int main(){
    naglowek();
}
void naglowek(){
    string calc="KALKULATOR";
    string rown,space;
    for (int i=1; i<=20; i++){
        rown=rown+"=";
    }
    for (int i=1; i<=5; i++){
        space=space+" ";
    }
    cout<<rown<<endl<<space+calc+space<<endl<<rown;
}