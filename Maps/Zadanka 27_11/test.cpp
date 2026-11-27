#include <ctime> //MSVC ma limit 16 bitow na randzie XDDDDDDD
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
    srand(time(nullptr));
    unsigned int x=RAND_MAX;
    cout<<x<<endl;
    cout<<static_cast<unsigned int>(RAND_MAX)<<endl;
    int y=RAND_MAX;
    cout<<y;
}