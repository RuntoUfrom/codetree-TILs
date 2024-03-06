#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector < vector <int >> v2(4, vector<int>(4, 0));
    int tmp;
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> tmp;
            if (i >= j) {
                sum += tmp;
            }
        }
    }
    cout << sum;

    return 0;
}