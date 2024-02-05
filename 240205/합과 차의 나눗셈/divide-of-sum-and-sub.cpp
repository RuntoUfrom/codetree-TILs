#include <iostream>
using namespace std;
int main() {
    double a,b;
    cin>>a>>b;
    double ans = (a+b)/(a-b);
    cout<<fixed;
    cout.precision(2);
    cout<<ans;
    
    return 0;
}