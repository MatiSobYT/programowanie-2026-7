#include <iostream>
#include <map>
using namespace std;
int main(){
    map <int, int> m;
    srand(time(NULL));
    for(int i=0; i<5; i++){
        m.insert({rand()%800+100, rand()%10+1});
    }
    cout<<"Przed: "<<endl;
    for(auto m2:m){
        cout<<m2.first<<":"<<m2.second<<endl;
    }
    if(m.contains(102)){
        m.at(102)=rand();
    }
    else{
        m.insert({102, rand()});
    }
    m.insert({rand(), rand()});
    cout<<"Po: "<<endl;
    for(auto m3:m){
        cout<<m3.first<<":"<<m3.second<<endl;
    }
}