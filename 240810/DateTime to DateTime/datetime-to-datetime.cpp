#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int tmpday,tmphour,tmpmin;
    tmpday = 11;
    tmphour = 11;
    tmpmin = 11;
    int min = 0;
    if((a<11)||(a==11&&b<11)||(a==11&&b==11&&c<11)){
           cout<<-1;
           return 0;
        }
    else{
       cout<<((a-tmpday)*60*24)+ ((b-tmphour)*60) +(c-tmpmin);
    }
    return 0;
}