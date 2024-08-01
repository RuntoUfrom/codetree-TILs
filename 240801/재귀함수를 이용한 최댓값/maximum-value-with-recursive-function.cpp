#include <iostream>
#include<vector>
using namespace std;

int maxn = 0;
int calc(int cnt){
    int num;
    cin>>num;
    cnt--;
    if(cnt==0){
        return maxn;
    }
    if(maxn<num){
        maxn = num;
    }
    return calc(cnt);
}

int main() {
    int n;
    cin>>n;
    cout<<calc(n);
    
    return 0;
}