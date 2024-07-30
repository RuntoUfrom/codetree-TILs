#include <iostream>
using namespace std;

void calc(int &a, int &b){
    if(a<b){
        a += 10;
        b *= 2;
    }
    else{
        b+=10;
        a *=2;
    }
}

int main() {
    int a,b;
    cin>>a>>b;
    calc(a,b);
    cout<<a<<" "<<b;
    return 0;
}