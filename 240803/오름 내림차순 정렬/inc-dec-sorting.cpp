#include <iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v1;
    for(int i = 0;i<n; i++){
        int tmp;
        cin>>tmp;
        v1.push_back(tmp);
    }
    sort(v1.begin(), v1.end());
    for(int i = 0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    sort(v1.begin(),v1.end(),greater<int>());
    for(int i = 0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}