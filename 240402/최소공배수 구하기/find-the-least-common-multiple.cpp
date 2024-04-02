#include <iostream>
using namespace std;

void multiple(int n, int m) {
	int arrn[100];
	
	int cnt = 0;
	while (true) {
		arrn[cnt] = n * (cnt + 1);
		if (arrn[cnt] % m == 0) {
			cout << arrn[cnt];
			break;
		}
        cnt++;
	}
}
int main() {
	int n, m;
	cin >> n >> m;
	multiple(n, m);
}