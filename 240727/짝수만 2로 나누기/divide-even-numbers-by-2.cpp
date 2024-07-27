#include <iostream>
using namespace std;

void ifeven(int *x,int N){
    for(int i = 0; i<N; i++){
        if(x[i]%2==0){
            x[i] = x[i]/2;
        }
    }
}
int main() {
   int N;
   cin>>N;
   int arr[N];
   for(int i = 0; i<N; i++){
       cin>>arr[i];
   }
   ifeven(arr,N);
   for(int i = 0; i<N; i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}