#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<long long> a(n), b(n);
    long long min_a = 2e9, min_b = 2e9;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        min_a = min(min_a, a[i]);
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        min_b = min(min_b, b[i]);
    }

    long long total_moves = 0;
    for (int i = 0; i < n; ++i) {
        total_moves += max(a[i] - min_a, b[i] - min_b);
    }

    cout << total_moves << "\n";
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