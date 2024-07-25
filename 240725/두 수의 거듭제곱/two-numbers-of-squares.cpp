#include <iostream>
using namespace std;

long doubleing(int a, int b){
    int sum = 1;
    for(int i = 0; i<b; i++){
        sum = sum*a;
    }
    return sum;
}
int main() {
    int a,b;
    cin>>a>>b;
cout<<doubleing(a,b);
    return 0;
}