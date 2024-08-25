#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(100,0);
    for(int i = 0; i<n; i++){
        int x1,x2;
        cin>>x1>>x2;
        for(int i = x1; i<=x2; i++){
            v[i]= v[i]+1;
        }
    }
    int max = 0;
     max= *max_element(v.begin(),v.end());
     cout<<max;
    return 0;
}