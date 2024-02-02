#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int tmp_1;int tmp_2;
    tmp_1 = b;
    tmp_2 = c;
    b = a;
    c = tmp_1;
    a = tmp_2;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}