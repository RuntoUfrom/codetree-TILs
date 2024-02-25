#include <iostream>
using namespace std;
int main() {
	int arr[100];
	int n;
	int tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr[i] = tmp;
	}
	for (int i = n-1; i >= 0; i--) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << " ";
		}
	}

}