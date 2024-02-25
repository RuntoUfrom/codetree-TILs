#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int cnt = 0;
    for(int i = 0; i<10; i++){
       cin>>arr[i];
       if(arr[i]%3==0){
        break;
       }
        cnt++;
    }
    cout<<arr[cnt-1];
    return 0;
}