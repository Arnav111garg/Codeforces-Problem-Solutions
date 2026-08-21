#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> cnt(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a <= n) {
            cnt[a]++;
        }
    }

    vector<int> caught(n + 1, 0);
    for (int d = 1; d <= n; ++d) {
        if (cnt[d] == 0) continue;
        for (int j = d; j <= n; j += d) {
            caught[j] += cnt[d];
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans = max(ans, caught[i]);
    }

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