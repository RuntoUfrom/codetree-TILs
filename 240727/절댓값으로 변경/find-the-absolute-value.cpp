#include <iostream>
using namespace std;

void absolute(int x[], int N) {
    for (int i = 0; i < N; i++) {
        if (x[i] < 0) {
            x[i] = -1 * x[i];
        }
    }
}

int main() {
    int N;
    cin >> N;
    int arr[50];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    absolute(arr,N);
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}