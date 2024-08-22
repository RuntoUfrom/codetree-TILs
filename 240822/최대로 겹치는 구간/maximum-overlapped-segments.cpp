#include <iostream>
#include<vector>
//#include<utility>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;

void coloring(int x1,int x2,vector<int> &v){
    for(int i = x1; i<x2; i++){
        v[i] = v[i]+1;
    }
}
int main() {
    int n;
    cin>>n;
    vector<int> v(200,0);
    for(int i = 0; i<n; i++){
        int x1,x2;
        cin>>x1>>x2;
        if(x1<0||x2<0){
           int tmp = abs(x1);
            x1+=tmp;
            x2+=tmp;
           
        }
        coloring(x1,x2-1,v);
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[0];
    return 0;
}