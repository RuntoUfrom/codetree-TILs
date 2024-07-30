#include <iostream>
#include<vector>
using namespace std;

vector<int> v(100);
int sum;

void calc(int m){
    while(m>0){
        if(m==1){
            sum+=v[1];
            //cout<<v[m]<<" "<<sum<<endl;
            break;
        }
        sum += v[m];
        //cout<<v[m]<<" "<<sum<<endl;
        if(m%2==1){
            m-=1;
        }
        else{
            m/=2;
        }
        
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    v.resize(n+1);
    for(int i = 1; i<=n; i++){
        cin>>v[i];
    }
    calc(m);
    cout<<sum;
    return 0;
}