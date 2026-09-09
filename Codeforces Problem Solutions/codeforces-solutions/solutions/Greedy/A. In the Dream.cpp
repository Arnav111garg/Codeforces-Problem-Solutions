#include <bits/stdc++.h>
using namespace std;

bool is_valid_half(int x, int y) {
    return x <= 2 * (y + 1) && y <= 2 * (x + 1);
}

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int dx = c - a;
    int dy = d - b;

    if (is_valid_half(a, b) && is_valid_half(dx, dy)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}