#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cin>>str;
    int length = str.length();
    int num = stoi(str);
    int arr[8] = {0,0,0,0,0,0,0,0};
    for(int i = length-1; i>=0; i--){
        arr[i] = num%10;
        num = num/10;
    }
    int ans = 0;
    for(int i = 0;i<length; i++){
        ans = ans*2+arr[i];
    }
    cout<<ans;
    return 0;
}