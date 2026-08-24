#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    if (!(cin >> n >> m)) return;

    long long ans = (n * m + 1) / 2;

    cout << ans << "\n";
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