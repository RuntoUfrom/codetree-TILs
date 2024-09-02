#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

vector<int> v (2000,0);
int it = 1000;

void MovingRight(int x){
    for(int i = 0; i<x; i++){
        v[it+i] = v[it+i]+1;
    }
    it+=x;
}
void MovingLeft(int x){
     for(int i = 0; i<x; i++){
        v[it-i] = v[it-i]+1;
    }
    it-=x;
}
int FindDouble(vector<int> v){
    int tmp = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i]>=2){
            tmp++;
        }
    }
    return tmp;
}
int main() {
    int n; 
    cin>>n;
    for(int i = 0; i<n; i++){
        string str;
        int x;
        cin>>x>>str;
        if(str=="R"){ // R
            MovingRight(x);
        }else if(str=="L"){  //L
            MovingLeft(x);
        }
    }
    cout<<FindDouble(v);
    return 0;
}