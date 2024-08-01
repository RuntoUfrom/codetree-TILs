#include <iostream>
using namespace std;


int fact(int n, int &cnt){
    if(n==1){
        return 0;
    }
    if(n%2==0){
        cnt++;
       return fact(n/=2,cnt);
       
    }
    else{
        cnt++;
       return fact(n/=3,cnt);
      
    }
}

int main() {
    int n;
    cin>>n;
    int cnt = 0;
    fact(n,cnt);
    cout<<cnt;
    return 0;
}