#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    if (n % 2050 != 0) {
        cout << -1 << "\n";
        return;
    }

    long long q = n / 2050;
    long long ans = 0;

    while (q > 0) {
        ans += q % 10;
        q /= 10;
    }

    cout << ans << "\n";
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