#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    int flag;
    for(int i = a; i<=b; i++){
       if((1920%i==0)&&(2880%i==0)){
        flag = 1;
        break;
       }
       else{
        flag = 0;
       }
    }
    cout<<flag;
    return 0;
}