#include <iostream>
using namespace std;

void printnumber(int N){
    if(N==0){
        return;
    }
    cout<<N<<" ";
    printnumber(N-1);
    cout<<N<<" ";
}
int main() {
    int N;
    cin>>N;
    printnumber(N);

    return 0;
}