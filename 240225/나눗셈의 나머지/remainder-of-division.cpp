#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int remain = 0;
    int cnt[b-1];
    int ans = 0;
    
    for(int i = 0; i<b-1; i++){
        cnt[i] = 0;
    }
    while(a>1){
        remain = a%b;
        for(int i = 0; i<b; i++){
            if(remain==i){
                cnt[i] = cnt[i]+1;
            }
        }
        a = a/b;
    }
    for(int i = 0; i<b; i++){
      ans+=cnt[i]*cnt[i];
    }
    cout<<ans;
    return 0;
}