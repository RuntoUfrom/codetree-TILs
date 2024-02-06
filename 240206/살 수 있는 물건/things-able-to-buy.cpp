#include <iostream>
using namespace std;
int main() {
    int m;
    cin>>m;
    if(m>=3000){
        cout<<"book";
    }
    else if(m>=1000&&m<3000){
        cout<<"mask";
    }
    return 0;
}