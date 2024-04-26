#include <iostream>
using namespace std;

int ans(int n){
    int sum = 0;
    for(int i = 1; i<=n ;i++){
        sum+=i;
    }
    return sum/10;
}
int main() {
   int N;
   cin>>N;
   cout<<ans(N);
    return 0;
}