#include <iostream>
using namespace std;
int main() {
	int m;
	cin >> m;
	if (m >= 1000) {
		if (m >= 3000) {
			cout << "book";
		}
		else {
			cout << "mask";
		}
	}
	else {
		cout << "no";
	}
}