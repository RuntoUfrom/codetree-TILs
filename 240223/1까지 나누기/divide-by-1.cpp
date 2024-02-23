#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int tmp = 1;
    int cnt = 1;

    while(true){
        if(n/cnt<1){
            break;
        }
        n = n/cnt;
        cnt++;
    }
    cout<<cnt;
    return 0;
}