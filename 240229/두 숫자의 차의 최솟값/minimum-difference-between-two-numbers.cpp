#include <iostream>
using namespace std;
int main() {
    int n;
    int min;
    cin>>n;
    int arr[10] = {};
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
   min = arr[1]-arr[0];
    for(int i = 2; i<n; i++){
      if(min>(arr[i]-arr[i-1])){
        min = arr[i]-arr[i-1];
      }
    }
    cout<<min;
    return 0;
}