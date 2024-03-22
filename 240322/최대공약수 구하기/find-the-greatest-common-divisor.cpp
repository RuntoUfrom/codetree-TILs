#include <iostream>
using namespace std;
void LargeNum(int n, int m){
    int arrn[100] = {0};
    int arrm[100] = {0};
    int cnt = 0;
    int cnt2 = 0;
for(int i =1 ;  i<=n; i++){
    if(n%i==0){
        arrn[cnt] = i;
        cnt++;
    }
}
for(int i = 1; i<=m; i++){
     if(m%i==0){
        arrm[cnt2] = i;
        cnt2++;
    }
}
int max = 1;
for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(arrn[i] == arrm[j] && arrn[i] != 0 && arrm[j] != 0) {
                if(arrn[i] > max) {
                    max = arrn[i];
                }
            }
        }
    }
cout<<max;
}
int main() {
    int n,m;
    cin>>n>>m;
    LargeNum(n,m);
    return 0;
}