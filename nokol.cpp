#include <iostream>
#include <vector>

using namespace std;

// Solves the problem for the given sequence and boredom threshold.
// Returns the number of elements that need to be changed, and the modified sequence.
pair<int, vector<int>> solve(vector<int> sequence, int k) {
    int m = 0;  // number of elements to change
    int l = 0;  // starting index of current monotone subsequence
    int r = 0;  // ending index of current monotone subsequence
    int direction = 0;  // direction of current monotone subsequence (1 for increasing, -1 for decreasing)

    for (int i = 1; i < sequence.size(); i++) {  // iterate through the sequence
        if (direction == 0) {  // if we are not in a monotone subsequence
            if (sequence[i] > sequence[i-1]) {  // start an increasing subsequence
                l = i-1;
                r = i;
                direction = 1;
            }
            else if (sequence[i] < sequence[i-1]) {  // start a decreasing subsequence
                l = i-1;
                r = i;
                direction = -1;
            }
        }
        else {  // if we are in a monotone subsequence
            if (direction == 1 && sequence[i] < sequence[i-1]) {  // if the direction changes in an increasing subsequence
                r = i-1;  // end the current subsequence
                direction = 0;
            }
            else if (direction == -1 && sequence[i] > sequence[i-1]) {  // if the direction changes in a decreasing subsequence
                r = i-1;  // end the current subsequence
                direction = 0;
            }
        }

        if (r - l + 1 >= k) {  // if the current subsequence is long enough
            m += 2;  // increment the number of elements to change
            if (direction == 1) {  // change the second and third elements in the subsequence to break the monotone sequence
                sequence[l+1] = sequence[l] - 1;
                sequence[l+2] = sequence[l] - 2;
            }
            else {  // direction == -1
                sequence[l+1] = sequence[l] + 1;
                sequence[l+2] = sequence[l] + 2;
            }
            l = l + 2;  // start a new subsequence at the third element
            direction = 0;
        }
    }

    return make_pair(m, sequence);
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

        pair<int, vector<int>> result = solve(sequence, k);
    cout << result.first << endl;
    for (int i = 0; i < n; i++) {
        cout << result.second[i] << " ";
    }
    cout << endl;

    return 0;
}