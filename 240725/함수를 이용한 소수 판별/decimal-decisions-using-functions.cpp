#include <iostream>
using namespace std;

bool isPrime(int n) {
    bool is_prime = true;
    if(n==1){
        is_prime = false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = false;
        }
    }
    return is_prime;
}
int main() {
    int a, b;
    int sum = 0;
    cin >> a >> b;
 
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            sum = sum + i;
        }
    }
    cout << sum;
    return 0;
}