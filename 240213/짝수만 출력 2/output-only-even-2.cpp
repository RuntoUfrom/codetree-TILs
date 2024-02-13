#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int b, a, i;

	// 입력
	cin >> b >> a;
	
	i = b;
    
    // 출력
	while(i >= a) {
		cout << i << " ";
		i -= 2;
	}

    return 0;
}