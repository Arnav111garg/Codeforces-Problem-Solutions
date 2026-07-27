#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;

    int time_row = (rb <= rd) ? (rd - rb) : ((n - rb) + (n - rd));
    int time_col = (cb <= cd) ? (cd - cb) : ((m - cb) + (m - cd));

    cout << min(time_row, time_col) << "\n";
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