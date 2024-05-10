#include <iostream>
using namespace std;
bool magicnum(int n){
    int sum;
    sum = (n%10)+(n/10);
    if((n%2==0)&&(sum%5==0)){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    int N;
    cin>>N;
   if(magicnum(N)){
    cout<<"Yes";
   }
   else{
    cout<<"No";
   }
    return 0;
}