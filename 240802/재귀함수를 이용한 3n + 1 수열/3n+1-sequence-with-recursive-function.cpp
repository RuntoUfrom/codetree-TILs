#include <iostream>
using namespace std;

int cnt = 0;
int calc(int n){
    if(n==1){
        return 0;
    }
    cnt++;
    if(n%2==0){
       return calc(n/=2);
    }else{
        return calc(n*3+1);
    }
}

int main() {
    int n;
    cin>>n;
    calc(n);
    cout<<cnt;
    return 0;
}