#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;

    vector<int> cnt(k, 0);
    for (int i = 0; i < n; ++i) {
        int d;
        cin >> d;
        cnt[d % k]++;
    }

    int total_pairs = 0;

    total_pairs += cnt[0] / 2;

    for (int r = 1; r < (k + 1) / 2; ++r) {
        total_pairs += min(cnt[r], cnt[k - r]);
    }

    if (k % 2 == 0) {
        total_pairs += cnt[k / 2] / 2;
    }

    cout << total_pairs * 2 << "\n";
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