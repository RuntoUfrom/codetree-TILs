#include <iostream>
using namespace std;

void changing(int &a, int &b){
    if(a>b){
        a = a+25;
        b = b*2;
    }
    else{
        b = b+25;
        a = a*2;
    }
}

int main() {
    int a, b;
    cin>>a>>b;
    changing(a,b);
    cout<<a<<" "<<b;
    return 0;
}