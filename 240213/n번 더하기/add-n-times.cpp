#include <iostream>
using namespace std;
int main() {
    int a, n;
    int sum;
    cin>>a>>n;
    sum = a;
    for(int i = 0; i<n; i++){
        sum = sum+n;
        cout<<sum<<endl;
    }
    return 0;
}