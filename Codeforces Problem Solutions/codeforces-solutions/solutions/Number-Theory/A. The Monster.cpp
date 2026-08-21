#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    if (!(cin >> a >> b >> c >> d)) return;

    for (int x = 0; x <= 100; ++x) {
        int t = b + x * a;
        if (t >= d && (t - d) % c == 0) {
            cout << t << "\n";
            return;
        }
    }

    cout << -1 << "\n";
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