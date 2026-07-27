#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    if ((x + y) % 2 != 0) {
        cout << "-1 -1\n";
        return;
    }

    if (x % 2 == 0) {
        cout << x / 2 << " " << y / 2 << "\n";
    } else {
        cout << (x - 1) / 2 << " " << (y + 1) / 2 << "\n";
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