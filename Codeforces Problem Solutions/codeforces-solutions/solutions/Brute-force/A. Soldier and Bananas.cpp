#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k, n, w;
    cin >> k >> n >> w;

    long long total_cost = k * (w * (w + 1)) / 2;

    long long borrow = total_cost - n;

    cout << max(0LL, borrow) << "\n";
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