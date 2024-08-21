#include <iostream>
#include<vector>
using namespace std;
int toDec(int a, string num){
  int tmp = 0;
  for(int i = 0; i<(int)num.length(); i++){
       tmp = tmp*a+(num[i]-'0');
    }
    return tmp;
}
void toB(int b,int num){
    vector<int> v;
    while(true){
        if(num<b){
            v.push_back(num);
            break;
        }
        v.push_back(num%b);
        num/=b;
    }
    for(int i =v.size()-1; i>=0; i--){
        cout<<v[i];
    }
}

int main() {
    int a,b;
    string n;
    cin>>a>>b>>n;
    toB(b,toDec(a,n));
    
    return 0;
}