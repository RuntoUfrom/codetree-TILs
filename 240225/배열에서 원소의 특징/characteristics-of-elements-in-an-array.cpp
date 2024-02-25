#include <iostream>
using namespace std;
int main() {
    int arr[10];
    
    for(int i = 0; i<10; i++){
       cin>>arr[i];
       if(arr[i]%3==0){
        cout<<i;
        break;
       }
        
    }
    
    return 0;
}