#include <bits/stdc++.h>
using namespace std;

// Define the ASCII art patterns for each digit
const char* patterns[] = {
    " -   -   -   - ", // 0
    "          -   - ", // 1
    " -   -   -   - ", // 2
    " -   -   -   - ", // 3
    "          -   - ", // 4
    " -   -   -   - ", // 5
    " -   -   -   - ", // 6
    " -   -   -   - ", // 7
    " -   -   -   - ", // 8
    " -   -   -   - "  // 9
};

int main() {
    int size;
    string num;

    // Read in numbers until size and num are both 0
    while (cin >> size >> num) {
        if (size == 0 && num == "0") break;

        // Print the ASCII art representation of the number
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < num.length(); j++) {
                char digit = num[j];
                int patternIndex = digit - '0';
                cout << patterns[patternIndex][i * 3] << ' ';

                for (int k = 0; k < size; k++) {
                    cout << patterns[patternIndex][i * 3 + 1];
                }

                cout << ' ' << patterns[patternIndex][i * 3 + 2] << ' ';
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}