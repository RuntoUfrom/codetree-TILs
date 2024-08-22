#include <iostream>
#include<vector>
#include<utility>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;

void coloring(int x1,int x2,vector<int> &v){
    for(int i = x1; i<x2; i++){
        v[i] = v[i]+1;
    }
}
pair<int,int> offset(int x1,int x2){
    int tmp = abs(x1);
    x1+=tmp;
    x2+=tmp;
    pair<int,int> p = make_pair(x1,x2);
    return p;
}
int main() {
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i = 0; i<n; i++){
        int x1,x2;
        cin>>x1>>x2;
        if(x1<0||x2<0){
           x1= offset(x1,x2).first;
           x2 = offset(x1,x2).second;
        }
        coloring(x1,x2-1,v);
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[0];
    return 0;
}