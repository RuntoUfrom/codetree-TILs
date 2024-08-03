#include <iostream>
using namespace std;

int calc(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return calc(n/3)+calc(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<calc(n);
    return 0;
}