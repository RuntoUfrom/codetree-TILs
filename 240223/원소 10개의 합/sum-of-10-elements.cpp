#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int sum = 0;
    int tmp;
    for(int i = 0; i<10; i++){
        cin>>tmp;
        arr[i] = tmp;
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}