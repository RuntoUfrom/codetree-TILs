#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int cnt=1;
  while(true){
    if(n%2==0){
        n = n*3+1;
    }
    else if(n%2==1){
        n = n*2+2;
    }
    if(n>=1000){
        break;
    }
    cnt++;
  }
  cout<<cnt;
    return 0;
}