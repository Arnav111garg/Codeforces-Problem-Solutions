#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int total_insertions = 0;

    for (int i = 0; i < n - 1; ++i) {
        int mn = min(a[i], a[i + 1]);
        int mx = max(a[i], a[i + 1]);

        while (2 * mn < mx) {
            mn *= 2;
            total_insertions++;
        }
    }

    cout << total_insertions << "\n";
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