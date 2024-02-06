#include <iostream>
using namespace std;
int main() {
    int m;
    cin>>m;
    if(m>=1000&&m<3000){
        cout<<"mask";
    }
    else if(m>=3000){
         cout<<"book";
    }
    else{
        cout<<"no"
    }
    return 0;
}