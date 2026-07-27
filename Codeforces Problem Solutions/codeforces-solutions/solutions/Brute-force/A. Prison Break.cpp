#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, r, c;
    cin >> n >> m >> r >> c;

    long long max_row_dist = max(r - 1, n - r);
    long long max_col_dist = max(c - 1, m - c);

    cout << max_row_dist + max_col_dist << "\n";
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