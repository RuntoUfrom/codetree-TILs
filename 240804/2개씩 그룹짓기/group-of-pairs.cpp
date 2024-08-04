#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[2000];
    int ans = 0;
    for(int i = 0; i<2*n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+2*n);
    ans = arr[0]+arr[2*n-1];
    for(int i = 0; i<n; i++){
        int tmp = arr[i]+arr[2*n-1-i];
        if(ans<tmp){
            ans = tmp;
        }
    }
    cout<<ans;
    return 0;
}