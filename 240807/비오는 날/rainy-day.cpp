#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

class Day {
public:
    int year;
    int month;
    int date;
    string day;
    string weather;
    Day(int year, int month, int date, string day, string weather) {
        this->year = year;
        this->month = month;
        this->date = date;
        this->day = day;
        this->weather = weather;
    }
    Day() {}
};

tuple<int, int, int> StringToDay(string str) {
    string tmpyears, tmpmonths, tmpdates;
    int tmpyear, tmpmonth, tmpdate;
    tmpyears = str.substr(0, 4); // 4 characters for the year
    tmpmonths = str.substr(5, 2); // 2 characters for the month
    tmpdates = str.substr(8, 2); // 2 characters for the date
    tmpyear = stoi(tmpyears);
    tmpmonth = stoi(tmpmonths);
    tmpdate = stoi(tmpdates);
    return make_tuple(tmpyear, tmpmonth, tmpdate);
}

int main() {
    int n;
    cin >> n;
    Day arrDay[100];
    vector<Day> vRain;
    for (int i = 0; i < n; i++) {
        string tmpdate, tmpday, tmpweather;
        cin >> tmpdate >> tmpday >> tmpweather;
        tuple<int, int, int> t = StringToDay(tmpdate);
        arrDay[i] = Day(get<0>(t), get<1>(t), get<2>(t), tmpday, tmpweather);
    }

    for (int i = 0; i < n; i++) {
        if (arrDay[i].weather.compare("Rain") == 0) {
            vRain.push_back(arrDay[i]);
        }
    }


    int Rainyidx = 0;
    for (int i = 1; i < vRain.size(); i++) {
        if (vRain[Rainyidx].year > vRain[i].year) {
            Rainyidx = i;
        }
        else if (vRain[Rainyidx].year == vRain[i].year) {
            if (vRain[Rainyidx].month > vRain[i].month) {
                Rainyidx = i;
            }
            else if (vRain[Rainyidx].month == vRain[i].month) {
                if (vRain[Rainyidx].date > vRain[i].date) {
                    Rainyidx = i;
                }
            }
        }
    }
    cout << vRain[Rainyidx].year << "-"
        << (vRain[Rainyidx].month < 10 ? "0" : "") << vRain[Rainyidx].month << "-"
        << (vRain[Rainyidx].date < 10 ? "0" : "") << vRain[Rainyidx].date << " "
        << vRain[Rainyidx].day << " " << vRain[Rainyidx].weather << endl;

    return 0;
}