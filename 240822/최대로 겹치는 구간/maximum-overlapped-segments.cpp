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
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> inputvec(n,make_pair(0,0));
    vector<int> v(200,0);
    for(int i = 0; i<n; i++){
        int x1,x2;
        cin>>x1>>x2;
        pair<int,int> inputp = make_pair(x1,x2);
        inputvec[i] = inputp;
    }
    int offsetnum = 0; //여러 x1중 가장 작은 값을 저장하는 변수
    for(int i = 0; i<n; i++){
        if(inputvec[i].first<offsetnum){
            offsetnum = inputvec[i].first;
        }
    }
    for(int i = 0; i<n; i++){
        inputvec[i].first-=offsetnum;
        inputvec[i].second-=offsetnum;
    }
    for(int i = 0; i<n; i++){
        coloring(inputvec[i].first,inputvec[i].second-1,v);
    }
    int ans = *max_element(v.begin(),v.end());
    cout<<ans;
    return 0;
}