#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    //int remain = 0;
    int cnt[b] = {};
    int ans = 0;

    while(a>1){
       // remain = a%b;
        cnt[a%b]++;
        a = a/b;
    }
    for(int i = 0; i<b; i++){
      ans+=cnt[i]*cnt[i];
    }
    cout<<ans;
    return 0;
}