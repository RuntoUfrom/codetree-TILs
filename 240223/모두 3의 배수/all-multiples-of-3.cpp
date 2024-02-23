#include <iostream>
using namespace std;
int main() {
    int flag = 0;
    int tmp;
    for(int i = 0; i<5; i++){
        cin>>tmp;
        if(tmp%3==0){
            flag++;
        }
    }
    if(flag==5){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}