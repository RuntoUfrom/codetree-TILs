#include <iostream>
#include <string>
using namespace std;

int month_day[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int NumOfDays(int m, int d) { // 1월 1일 부터 흐른 날짜를 계산하는 함수
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
    int daycnt = 0;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> day;

    int diff = NumOfDays(m2, d2) - NumOfDays(m1, d1);

    // Determine the initial day of the week for m1, d1
    int startDay = 0; // Assuming Jan 1st is a Monday (adjust as needed)
    if (day == "Mon") startDay = 0;
    else if (day == "Tue") startDay = 1;
    else if (day == "Wed") startDay = 2;
    else if (day == "Thu") startDay = 3;
    else if (day == "Fri") startDay = 4;
    else if (day == "Sat") startDay = 5;
    else if (day == "Sun") startDay = 6;

    // Calculate number of complete weeks
    ansday_cnt = diff / 7;

    // Calculate the remainder days and check if an extra day fits
    if (diff % 7 >= (7 - startDay) % 7) {
        ansday_cnt++;
    }

    cout << ansday_cnt;

    return 0;
}