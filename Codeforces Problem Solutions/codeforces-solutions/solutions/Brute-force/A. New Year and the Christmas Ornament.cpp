#include <bits/stdc++.h>
using namespace std;

void solve() {
    int y, b, r;
    if (cin >> y >> b >> r) {
        int max_y = min({y, b - 1, r - 2});
        cout << 3 * max_y + 3 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}