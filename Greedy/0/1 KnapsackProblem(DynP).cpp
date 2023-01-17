#include <iostream>
#include <vector>
using namespace std;

int n, w;
vector<int> weight, value;
vector<vector<int>> dp;

int knapsack() {
    dp.resize(n + 1, vector<int>(w + 1));
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (weight[i-1] <= j)
            {
                dp[i][j] = max(value[i-1] + dp[i-1][j-weight[i-1]], dp[i-1][j]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][w];
}

int main() {
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        weight.push_back(a);
        value.push_back(b);
    }
    cout << knapsack() << endl;
    return 0;
}
