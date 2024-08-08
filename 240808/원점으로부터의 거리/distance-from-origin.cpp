#include <iostream>
#include<algorithm>
using namespace std;
#define MAX 1000

class Dot {
public:
    int x;
    int y;
    int length;
    int idx;
    Dot(int x, int y, int length, int idx) {
     this->x = x;
     this->y = y;
     this->length = length;
     this->idx = idx;
    }
    Dot() {}
};
bool cmp(const Dot& a, const Dot& b) {
    if (a.length != b.length) {
        return a.length < b.length;
    }
    else {
        return a.idx < b.idx;
    }
}
int main() {
    int n;
    cin >> n;
    Dot arr[MAX];
    int arridx = 1;
    for (int i = 0; i < n; i++) {
        int tmpx, tmpy;
        cin >> tmpx >> tmpy;
        if(tmpx<0){
            tmpx = tmpx*-1;
        }
        if(tmpy<0){
            tmpy = tmpy*-1;
        }
        arr[i] = Dot(tmpx, tmpy,tmpx+tmpy,arridx);
        arridx++;
    }
    sort(arr, arr + n, cmp);
        for (int i = 0; i < n; i++) {
            cout << arr[i].idx << endl;
        }
    return 0;
}