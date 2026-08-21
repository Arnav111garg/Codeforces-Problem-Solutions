#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    if (!(cin >> n >> k)) return;

    long long min_packages = n;

    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            if (i <= k) {
                min_packages = min(min_packages, n / i);
            }
            if ((n / i) <= k) {
                min_packages = min(min_packages, i);
            }
        }
    }

    cout << min_packages << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}