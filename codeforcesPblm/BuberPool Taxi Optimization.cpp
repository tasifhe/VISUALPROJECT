#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <queue>

using namespace std;

const int MAXN = 1e4 + 5;

struct Order {
    int t, sx, sy, tx, ty;
};

struct Car {
    int x, y, t;
    vector<pair<int, int>> path;
    unordered_map<int, int> passenger_map;
};

int w, h;
int k;
int n;

Car cars[MAXN];
Order orders[MAXN];

int dist(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() {
    cin >> w >> h >> k >> n;

    for (int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;
        cars[i] = {x, y, 0};
    }

    for (int i = 1; i <= n; i++) {
        int t, sx, sy, tx, ty;
        cin >> t >> sx >> sy >> tx >> ty;
        orders[i] = {t, sx, sy, tx, ty};
    }

    int curr_t = 0;
    for (int i = 1; i <= n; i++) {
        int t = orders[i].t;
        int sx = orders[i].sx;
        int sy = orders[i].sy;
        int tx = orders[i].tx;
        int ty = orders[i].ty;

        curr_t = t;
        int min_dist = 1e9;
        int min_car = -1;
        for (int j = 1; j <= k; j++) {
            int d = dist(cars[j].x, cars[j].y, sx, sy);
            if (d < min_dist) {
                min_dist = d;
                min_car = j;
            }
        }

        // Update car path
        cars[min_car].path.push_back({sx, sy});
        cars[min_car].path.push_back({tx, ty});
        cars[min_car].passenger_map[i] = 1;
        cars[min_car].t = curr_t + min_dist;
    }

    // Print out instruction sets
    for (int i = 1; i <= k; i++) {
        cout << cars[i].path.size() << " ";
        for (int j = 0; j < cars[i].path.size(); j++) {
            int x = cars[i].path[j].first;
            int y = cars[i].path[j].second;
            cout << x << " " << y << " ";

            int a = 0;
            if (j == 0) {
                // Pick up
                for (auto p : cars[i].passenger_map) {
                    if (p.second == 1) {
                    a = p.first;
                    break;
                }
            }
            else if (j == (int) cars[i].path.size() - 1) {
                // Drop off
                for (auto p : cars[i].passenger_map) {
                    if (p.second == -1) {
                        a = -p.first;
                        break;
                    }
                }
            }
            cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}

