#include <iostream>
using namespace std;

int dfn = 0;

void print1(int N){
    if(N==0){
        return;
    }
    cout<<N<<" ";
    print1(N-1);
}
void print0(int N){
    if(N==0){
        return;
    }
    cout<<dfn-N+1<<" ";
    print0(N-1);
}
int main() {
    int N;
    cin>>N;
    dfn = N;
    print0(N);
    cout<<endl;
    print1(N);
    return 0;
}