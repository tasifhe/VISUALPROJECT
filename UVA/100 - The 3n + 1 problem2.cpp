#include <iostream>

using namespace std;

int computeCycleLength(int n) {
    int cycle_length = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        cycle_length++;
    }
    return cycle_length;
}

int maxCycleLength(int i, int j) {
    int max_cycle_length = 0;
    for (int n = i; n <= j; n++) {
        int cycle_length = computeCycleLength(n);
        if (cycle_length > max_cycle_length) {
            max_cycle_length = cycle_length;
        }
    }
    return max_cycle_length;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        cout << i << " " << j << " " << maxCycleLength(i, j) << endl;
    }
    return 0;
}
