#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    if (!(cin >> n)) return;

    long long d = n;
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            d = i;
            break;
        }
    }

    long long ans = 1 + (n - d) / 2;
    cout << ans << "\n";
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