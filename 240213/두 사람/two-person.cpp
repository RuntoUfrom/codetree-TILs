#include <iostream>
using namespace std;
int main() {
    int age_1;
    string gender_1;
    cin >> age_1 >> gender_1;
    int age_2;
    string gender_2;
    cin >> age_2 >> gender_2;
    if ((age_1 >= 19) && (gender_1 == "M")) {
        cout << 1;
    }
    else {
        if ((age_2 >= 19) && (gender_2 == "M")) {
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    return 0;
}