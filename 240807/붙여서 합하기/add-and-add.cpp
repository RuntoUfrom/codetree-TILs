#include <iostream>
#include<string>
using namespace std;

int main() {
   string A,B;
   cin>>A>>B;
   int a = stoi(A+B);
   int b = stoi(B+A);
    cout<<a+b;
    return 0;
}