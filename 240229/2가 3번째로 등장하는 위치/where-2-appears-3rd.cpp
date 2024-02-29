#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int cnt = 0;
    int tmp;
    for(int i = 0; i<n; i++){
        cin>>tmp;
        if(tmp==2){
            cnt++;
            if(cnt==3){
                cout<<i+1;
                break;
            }
        }
    }
    return 0;
}