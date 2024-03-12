#include <iostream>
using namespace std;
void output(int n){
    int tmp = 1;
    for(int i = 0; i<n; i++){
        for(int i = 0; i<n; i++){
            if(tmp==10){
                tmp=1;
            }
            cout<<tmp<<" ";
            tmp++;
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    output(n);
    return 0;
}