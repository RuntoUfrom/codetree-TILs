#include <iostream>
using namespace std;

int fact(int n){
    if(n<10){
        return n*n;
    }
    return fact(n/10)+((n%10)*(n%10));
}

int main() {
    int n;
    cin>>n;
    cout<< fact(n);
    return 0;
}