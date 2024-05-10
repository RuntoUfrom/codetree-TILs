#include <iostream>
using namespace std;
int min(int a, int b, int c){
    int min = a;
    if(min>=b){
        min = b;
    }
    if(min>=c){
        min = c;
    }
    return min;
}
int main() {
    int A,B,C;
    cin>>A>>B>>C;
    cout<<min(A,B,C);
    return 0;
}