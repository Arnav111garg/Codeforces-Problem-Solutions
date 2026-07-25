#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    // Case 0: Already at (0, 0)
    if (x == 0 && y == 0) {
        cout << 0 << "\n";
        return;
    }

    // Case 1: Distance from (0, 0) is an integer
    int dist_sq = x * x + y * y;
    int r = sqrt(dist_sq);

    if (r * r == dist_sq) {
        cout << 1 << "\n";
    } else {
        // Case 2: Otherwise, 2 moves are always sufficient
        cout << 2 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}