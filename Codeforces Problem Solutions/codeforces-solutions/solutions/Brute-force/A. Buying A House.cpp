#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    if (cin >> n >> m >> k) {
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int min_dist = INT_MAX;

        for (int i = 1; i <= n; i++) {
            if (a[i] > 0 && a[i] <= k) {
                int dist = abs(i - m) * 10;
                min_dist = min(min_dist, dist);
            }
        }

        cout << min_dist << "\n";
    }
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