#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int punkty=0,iloscPytan=10;
    cout<<"Oto 10 pytan z tabliczki mnozenia"<<endl;
    for(int i=1; i<=iloscPytan; i++){
        int a=rand()%10+1;
        int b=rand()%10+1;
        int poprawnyWynik=a*b;
        int odpowiedz;
        cout<<"Pytanie "<<i<<"/"<<iloscPytan<<": Ile to "<<a<<"*"<<b<<"?"<<endl<<"Odpowiedz: ";
        cin>>odpowiedz;
        if(odpowiedz==poprawnyWynik){
            cout<<"Poprawna odpowiedz"<<endl;
            punkty++;
        }
        else{
            cout<<"Bledna odpowiedz"<<endl;
        }
    }
    cout<<"Odpowiedziales poprawnie na "<<punkty<<"/"<<iloscPytan<<" pytan";
}