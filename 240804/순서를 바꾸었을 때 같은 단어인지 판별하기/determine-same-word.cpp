#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

bool IsPossible(string str1, string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1.compare(str2)==0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
   if(IsPossible(str1,str2)==true){
        cout<<"Yes";
   }
   else {
        cout<<"No";
   }

    return 0;
}