#include <iostream>
using namespace std;
double pole_figury(double a, double b, char figura);
int main() {
    double a,b;
    char figura;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Pole ktorej figury chcesz obliczyc: "<<endl<<"k - kwadrat"<<endl<<"p - prostokat"<<endl<<"t - trojkat"<<endl<<"Twoj wybor: ";
    cin>>figura;
    cout<<"Pole tej figury to: "<<pole_figury(a,b,figura);
}

double pole_figury(double a, double b, char figura) {
    if (figura=='k') {
        return a*a;
    }
    else if (figura=='p') {
        return a*b;
    }
    else if (figura=='t') {
        return (a*b)/2;
    }
    else {
        return 0;
    }
}