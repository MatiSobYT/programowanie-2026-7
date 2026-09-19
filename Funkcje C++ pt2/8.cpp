#include <iostream>
using namespace std;
int naMetry(int kilometry);
int main(){
    int kilometry;
    cout<<"Podaj liczbe kilometrow: ";
    cin>>kilometry;
    cout<<kilometry<<"km = "<<naMetry(kilometry)<<"m";
}
int naMetry(int kilometry){
    return kilometry*1000;
}