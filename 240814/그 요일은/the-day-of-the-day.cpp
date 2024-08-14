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

    // Calculate the number of days since January 1, 2024 for both dates
    int start_diff = NumOfDays(m1, d1) - 1; // Days from Jan 1, 2024 to (m1, d1)
    int end_diff = NumOfDays(m2, d2) - 1;   // Days from Jan 1, 2024 to (m2, d2)
    int diff = end_diff - start_diff;

    // Determine the starting day of the week index based on the start date
    int startDayIndex = start_diff % 7;  // Monday = 0, Tuesday = 1, ..., Sunday = 6

    // Calculate the number of complete weeks within the range
    ansday_cnt = diff / 7;

    // Check if the target day occurs in the remaining days
    int remainder = diff % 7;
    int dayOffset = (startDayIndex + remainder) % 7;

    if (day == "Mon" && dayOffset >= 0) {
        ansday_cnt++;
    } else if (day == "Tue" && dayOffset >=1) {
        ansday_cnt++;
    } else if (day == "Wed" && dayOffset >= 2) {
        ansday_cnt++;
    } else if (day == "Thu" && dayOffset >= 3) {
        ansday_cnt++;
    } else if (day == "Fri" && dayOffset >= 4) {
        ansday_cnt++;
    } else if (day == "Sat" && dayOffset >= 5) {
        ansday_cnt++;
    } else if (day == "Sun" && dayOffset >= 6) {
        ansday_cnt++;
    }

    cout << ansday_cnt;

    return 0;
}