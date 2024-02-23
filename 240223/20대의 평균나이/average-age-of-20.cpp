#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int tmp = 0;
    int cnt = 0;
  while(true){
    cin>>tmp;
    if(tmp>29||tmp<20){
        break;
    }
    sum+=tmp;
    cnt++;
  }
  cout<<fixed;
  cout.precision(2);
    cout<<(double)sum/(double)cnt;

    return 0;
}