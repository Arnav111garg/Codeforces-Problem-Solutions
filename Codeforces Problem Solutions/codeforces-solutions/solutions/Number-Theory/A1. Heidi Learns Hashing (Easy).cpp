#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long r;
    if (!(cin >> r)) return;

    for (long long x = 1; x * x + x + 1 < r; ++x) {
        long long num = r - x * x - x - 1;
        long long den = 2 * x;

        if (num > 0 && num % den == 0) {
            long long y = num / den;
            cout << x << " " << y << "\n";
            return;
        }
    }

    cout << "NO\n";
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