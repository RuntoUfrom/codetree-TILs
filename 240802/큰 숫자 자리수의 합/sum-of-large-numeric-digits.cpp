#include <iostream>
using namespace std;

int calc(int n){
    if(n<10){
        return n;
    }
    return calc(n/10) + n%10 ;
}

int main() {
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    cout<<calc(n1*n2*n3);
    return 0;
}