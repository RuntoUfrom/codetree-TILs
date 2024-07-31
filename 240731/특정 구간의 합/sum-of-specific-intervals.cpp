#include <iostream>
using namespace std;

int arr[101];

void calc(int a1, int a2){
    int tmp = 0;
    for(int i = a1; i<=a2; i++){
        tmp+= arr[i];
    }
    cout<<tmp<<endl;
}
int main() {
    int n, m;
    cin>>n>>m;
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i = 0; i<m; i++){
        int a1, a2;
        cin>>a1>>a2;
        calc(a1,a2);
    }
    return 0;
}