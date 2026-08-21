#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    if (n % 2 == 0) {
        long long ans = ((k - 1) % n) + 1;
        cout << ans << "\n";
    } else {
        long long skips = (k - 1) / ((n - 1) / 2);
        long long ans = (((k - 1) + skips) % n) + 1;
        cout << ans << "\n";
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