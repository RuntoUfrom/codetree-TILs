#include <iostream>
using namespace std;
//4/10==0
bool isone(int i){
    int tmp = 0;
    const int div = 10;
    while(i!=0){
         tmp = i%div;
        if(tmp==3||tmp==6||tmp==9){
            return true;
        }
        i = i/10;
    }
    return false;
}
bool isMagic(int i){
    if(i%3==0){
        return true;
    }else{
        return false;
    }
}

int main() {
    int a, b;
    cin>>a>>b;
    int cnt = 0;
    for(int i = a; i<=b; i++){
        if(isone(i)||isMagic(i)){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}