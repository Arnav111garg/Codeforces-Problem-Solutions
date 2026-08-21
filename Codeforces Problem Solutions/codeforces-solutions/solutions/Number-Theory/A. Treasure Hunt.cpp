#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x1, y1, x2, y2;
    long long x, y;
    if (!(cin >> x1 >> y1 >> x2 >> y2 >> x >> y)) return;

    long long dx = abs(x2 - x1);
    long long dy = abs(y2 - y1);

    if (dx % x != 0 || dy % y != 0) {
        cout << "NO\n";
        return;
    }

    long long kx = dx / x;
    long long ky = dy / y;

    if ((kx % 2) == (ky % 2)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}