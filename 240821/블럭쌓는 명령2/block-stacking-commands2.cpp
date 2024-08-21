#include <iostream>
#include<vector>
using namespace std;

int main() {
    int N,K;
    cin>>N>>K;
    vector<int> v(N,0);
    for(int i = 0; i<K; i++){
        int tmpA,tmpB;
        cin>>tmpA>>tmpB;
        for(int i = tmpA; i<=tmpB; i++){
            v[i] = v[i]+1;
        }
    }
    int max = 0;
    for(int i = 0; i<N; i++){
        //cout<<v[i]<<" ";
        if(v[i]>max){
            max = v[i];
        }
    }
    cout<<max;
    return 0;
}