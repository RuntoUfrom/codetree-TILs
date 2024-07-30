#include <iostream>
#include <string>
using namespace std;

int FFarr[1000];
int nT;
int nO;

int KMPMatch(string target, string object) {
    int i = 0;
    int j = 0;
    while (i < nT) {
        if (target[i] == object[j]) {
            if (j == nO - 1) {
                return i - j; //match
            }
            i += 1;
            j += 1;

        }
        else if (j > 0) {
            j = FFarr[j - 1];
        }
        else {
            i += 1;
        }
    }
    return -1; //no match
}
void makingFF(string object) {
    FFarr[0] = 0;
    int i = 1;
    int j = 0;
    while (i < nO) {
        if (object[i] == object[j]) {
            FFarr[i] = j + 1;
            i = i + 1;
            j = j + 1;
        }
        else if (j > 0) {
            j = FFarr[j - 1];
        }
        else {
            FFarr[i] = 0;
            i = i + 1;
        }
    }
}
int main() {
    string target;
    string object;
    int idx = 0;
    cin >> target;
    cin >> object;
    nT = target.length();
    nO = object.length();
    makingFF(object);
    cout << KMPMatch(target, object);
    return 0;
}