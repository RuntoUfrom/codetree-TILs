#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> v(2000, 0);  // Initialize vector with 2000 elements, all set to 0
int it = 1000;           // Middle of the vector

// Function to move right
void MovingRight(int x) {
    for (int i = 1; i <= x; i++) {
        v[it + i] = v[it + i] + 1;  // Increment position
    }
    it += x;  // Update current position
}

// Function to move left
void MovingLeft(int x) {
    for (int i = 0; i < x; i++) {
        v[it - i] = v[it - i] + 1;  // Increment position
    }
    it -= x;  // Update current position
}

// Function to find positions visited at least twice
int FindDouble(const vector<int>& v) {
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= 2) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;  // Read number of commands
    for (int i = 0; i < n; i++) {
        string direction;
        int x;
        cin >> x >> direction;  // Read movement amount and direction
        if (direction == "R") {
            MovingRight(x);  // Move right
        } else if (direction == "L") {
            MovingLeft(x);   // Move left
        }
    }
    cout << FindDouble(v);  // Output count of positions visited twice or more
    return 0;
}