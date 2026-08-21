#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    int k;
    if (!(cin >> n >> k)) return;

    long long pow10 = 1;
    for (int i = 0; i < k; ++i) {
        pow10 *= 10;
    }

    long long g = std::__gcd(n, pow10);
    long long ans = (n / g) * pow10;

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