#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> memo;

int computeCycleLength(int n) {
    if (memo.count(n)) {
        return memo[n];
    }
    if (n == 1) {
        return 1;
    }
    int cycle_length;
    if (n % 2 == 0) {
        cycle_length = 1 + computeCycleLength(n / 2);
    } else {
        cycle_length = 1 + computeCycleLength(3 * n + 1);
    }
    memo[n] = cycle_length;
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
