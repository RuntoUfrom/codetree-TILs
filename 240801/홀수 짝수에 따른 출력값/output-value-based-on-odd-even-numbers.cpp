#include <iostream>
using namespace std;

int calc(int n){
    if(n==1){
        return 1;
    }
    return calc(n-2) + n;
}

int calcEven(int n){
    if(n==2){
        return 2;
    }
    return calc(n-2) + n;
}
int main() {
    int n;
    cin>>n;
    if(n%2==0){
        cout<<calcEven(n);
    }
    else{
        cout<<calc(n);
    }

    return 0;
}