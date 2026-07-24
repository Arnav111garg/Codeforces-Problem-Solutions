#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long full_blocks = n / 15;
    long long remainder = n % 15;

    long long ans = full_blocks * 3 + min(3LL, remainder + 1);

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