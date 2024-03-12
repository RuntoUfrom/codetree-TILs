#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> vv(n, vector<int>(n, 0));
    int m;
    cin >> m;
    int tmpi, tmpj;
    for (int i = 0; i < m; i++) {
        cin >> tmpi >> tmpj;
        vv[tmpi-1][tmpj-1] = tmpi * tmpj;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }
}