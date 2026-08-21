#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, k;
    if (!(cin >> x >> y >> k)) return;

    while (k > 0 && x > 1) {
        long long rem = x % y;
        long long need = y - rem;

        if (k < need) {
            x += k;
            k = 0;
            break;
        }

        x += need;
        k -= need;

        while (x % y == 0) {
            x /= y;
        }
    }

    if (k > 0) {
        k %= (y - 1);
        x = 1 + k;
    }

    cout << x << "\n";
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