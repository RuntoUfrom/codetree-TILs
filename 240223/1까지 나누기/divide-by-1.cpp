#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int tmp = 0;
    int cnt = 1;

    while(true){
        n = n/cnt;
        cnt++;
        tmp++;
        if(n<=1){
            break;
        }
    }
    cout<<tmp;
    return 0;
}