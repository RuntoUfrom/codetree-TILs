#include <iostream>
using namespace std;

int ans = 0;
int GCD(int a, int b){
    return b? GCD(b,a%b):a;
}

int LCM(int n, int m){
    return (n*m)/GCD(n,m);
}
int main() {
    int n;
    cin>>n;
    int arr[10];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n-1; i++){
       arr[i+1] = LCM(arr[i],arr[i+1]);
    }
    cout<<arr[n-1];
    return 0;
}