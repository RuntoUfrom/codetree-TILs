#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void swap(string& a, string &b) {
    string tmp = a;
    a = b;
    b = tmp;
}

bool isPalin(string s) {
    string tmp = s;
    for (int i = 0; i < (s.length()) / 2; i++) {
        swap(s[i], s[(s.length()) - 1 - i]);
    }
    if (tmp == s) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    string str;
    cin >> str;
    if (isPalin(str)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}