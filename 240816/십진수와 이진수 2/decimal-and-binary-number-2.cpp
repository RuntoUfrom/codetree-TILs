#include <iostream>
#include<string>
#include<vector>
using namespace std;

int toDeci(string num){
    int tmp = 0;
    for(int i = 0; i<(int)num.length(); i++){
       tmp = tmp*2+(num[i]-'0');
    }
    return tmp;
}
void toBinary(int num){
    vector<int> v;
    while(true){
        if(num<2){
            v.push_back(num);
            break;
        }
        v.push_back(num%2);
        num = num/2;
    }
    for(int i = v.size()-1; i>=0; i--){
        cout<<v[i];
    }
}
int main() {
    string str;
    cin>>str;
    toBinary(17*toDeci(str));
    return 0;
}