#include <iostream>
using namespace std;
double srednia(double a, double b, double c);
bool zdany(double srednia);
int main(){
    double a, b, c, s;
    cout<<"Podaj 3 oceny: ";
    cin>>a>>b>>c;
    s=srednia(a,b,c);
    cout<<"Srednia: "<<s<<endl;
    if(zdany(s)==true){
        cout<<"Uczen zdal";
    }
    else{
        cout<<"Uczen nie zdal";
    }
}
double srednia(double a, double b, double c){
    return (a+b+c)/3;
}
bool zdany(double srednia){
    if(srednia>=2){
        return true;
    }
    else{
        return false;
    }
}