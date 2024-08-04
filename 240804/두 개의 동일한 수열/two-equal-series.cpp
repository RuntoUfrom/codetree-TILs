#include <iostream>
#include<algorithm>
using namespace std;

int main() {
   int n;
   cin>>n;
   int A[100];
   int B[100];
   bool ans = true;
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    for(int i = 0; i<n; i++){
        cin>>B[i];
    }
    sort(A,A+n);
    sort(B,B+n);
    for(int i =0;i<n;i++){
        if(A[i]!=B[i]){
            ans = false;
            break;
        }
    }
    if(ans==false){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
    return 0;
}