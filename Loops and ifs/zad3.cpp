#include <iostream>
using namespace std;
int main(){
    int pkt;
    cout<<"Podaj liczbe punktow: ";
    cin>>pkt;
    cout<<endl;
    if (pkt<0 || pkt>100){
        cout<<"Bledne dane";
    }
    else if (pkt<50){
        cout<<"Niedostateczny";
    }
    else if (pkt<60){
        cout<<"Dopuszczajacy";
    }
    else if (pkt<70){
        cout<<"Dostateczny";
    }
    else if (pkt<85){
        cout<<"Dobry";
    }
    else if (pkt<95){
        cout<<"Bardzo dobry";
    }
    else {
        cout<<"Celujacy";
    }
    return 0;
}