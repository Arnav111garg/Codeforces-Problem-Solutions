#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    int total_sum = 0;
    int min_odd = INT_MAX;
    int odd_count = 0;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        total_sum += a;

        if (a % 2 != 0) {
            odd_count++;
            min_odd = min(min_odd, a);
        }
    }

    if (odd_count == 0) {
        cout << 0 << "\n";
        return;
    }

    if (odd_count % 2 == 0) {
        total_sum -= min_odd;
    }

    cout << total_sum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}