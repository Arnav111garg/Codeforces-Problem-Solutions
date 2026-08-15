#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long l, r;
    cin >> l >> r;

    if (l != r) {
        long long x = (r % 2 == 0) ? r : r - 1;
        if (x > 3) {
            cout << 2 << " " << x - 2 << "\n";
            return;
        }
    } else {
        if (l % 2 == 0 && l > 3) {
            cout << 2 << " " << l - 2 << "\n";
            return;
        }
        
        long long p = -1;
        for (long long i = 2; i * i <= l; ++i) {
            if (l % i == 0) {
                p = i;
                break;
            }
        }
        
        if (p != -1) {
            cout << p << " " << l - p << "\n";
            return;
        }
    }

    cout << -1 << "\n";
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