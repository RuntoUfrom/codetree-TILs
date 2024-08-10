#include <iostream>
using namespace std;

int main() {
    int m1,m2,d1,d2;
    cin>>m1>>d1>>m2>>d2;
    int month_day[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int ansday = 1;
    while (true){
        if(m1==m2&&d1==d2){
            break;
        }
        ansday++;
        d1++;
        if(d1>month_day[m1]){
            m1++;
            d1 = 1;
        }
    }
    cout<<ansday;
    return 0;
}