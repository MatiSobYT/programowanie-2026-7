#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int los = rand() % (100+1);
    int typ=0;
    int lprob=0;
    while (typ != los){
        cout<<"Typuj: ";
        cin>>typ;
        lprob++;
        if (typ<los){
            cout<<"Za malo"<<endl;
        }
        else if (typ>los){
            cout<<"Za duzo"<<endl;
        }
    }
    cout<<"Zgadles w "<<lprob<<" probach";
    return 0;
}