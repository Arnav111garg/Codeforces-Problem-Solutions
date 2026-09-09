#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    int max_a = 0, max_b = 0;

    for (int i = 0; i < n; ++i) {
        int val1 = max(a[i], b[i]);
        int val2 = min(a[i], b[i]);

        max_a = max(max_a, val1);
        max_b = max(max_b, val2);
    }

    cout << max_a * max_b << "\n";
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