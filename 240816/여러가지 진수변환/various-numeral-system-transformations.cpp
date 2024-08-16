#include <iostream>
using namespace std;

int main() {
    int n,Binary;
    cin>>n>>Binary;
    int b;
    int arr[1000];
   
    if(Binary==4){
        b = 4;
    }else if(Binary==8){
        b = 8;
    }
    int cnt = 0;
    while(true){
        if(n<b){
            arr[cnt++] = n;
            break;
        }
        arr[cnt++] = n%b;
        n = n/b;
    }
    for(int i = cnt-1;i>=0; i--){
        cout<<arr[i];
    }
    return 0;
}