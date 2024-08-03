#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 10

int n;
int arr[MAX_N+1];

int LCM(int a, int b){
    int gcd = 1;
    for(int i = 1; i<= min(a,b); i++){
        if(a%i==0 &&b%i==0){
            gcd = i;
        }
    }
    return a*b/gcd;
}
int GetLCMALL(int index){
    if(index==1){
        return arr[1];
    }
    return LCM(GetLCMALL(index-1),arr[index]);
}
int main(){
    cin>>n;
    for(int i = 1;i<=n; i++){
        cin>>arr[i];
    }
    cout<<GetLCMALL(n);
}