#include <iostream>
using namespace std;

void printstar(int n){
    if(n==0){
        return;
    }
    cout<<"HelloWorld"<<endl;
    printstar(n-1);
}

int main() {
    int N;
    cin>>N;
    printstar(N);
    return 0;
}