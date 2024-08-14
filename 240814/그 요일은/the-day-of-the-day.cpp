#include <iostream>
#include <string>
using namespace std;

int month_day[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int NumOfDays(int m, int d) {
    int tmpsum = 0;
    for(int i = 1; i <= m - 1; i++) {
        tmpsum += month_day[i];
    }
    tmpsum += d;
    return tmpsum;
}

int main() {
    int m1, d1, m2, d2;
    string day;
    int ansday_cnt = 0;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> day;

    int end_diff = NumOfDays(m2,d2);
    int start_diff = NumOfDays(m1,d1);
    int diff = end_diff - start_diff;

    ansday_cnt = diff / 7;

    // Check if the target day occurs in the remaining days
    int remainder = diff % 7;
    if (day == "Mon" && remainder >= 0) {
        ansday_cnt++;
    } else if (day == "Tue" && remainder >=1) {
        ansday_cnt++;
    } else if (day == "Wed" && remainder >= 2) {
        ansday_cnt++;
    } else if (day == "Thu" && remainder >= 3) {
        ansday_cnt++;
    } else if (day == "Fri" && remainder >= 4) {
        ansday_cnt++;
    } else if (day == "Sat" && remainder >= 5) {
        ansday_cnt++;
    } else if (day == "Sun" && remainder >= 6) {
        ansday_cnt++;
    }

    cout << ansday_cnt;

    return 0;
}