#include <iostream>
using namespace std;
int main(){
    int arr2[4][4];
    int sum = 0;

    for(int i = 0;i<4; i++){
        for(int j=  0; j<4; j++){
            cin>>arr2[i][j];
        }
    }
    for(int i = 0; i<4; i++){
        for(int j = 0; j<=i; j++){
            sum+=arr2[i][j];
        }
    }
    cout<<sum;
}