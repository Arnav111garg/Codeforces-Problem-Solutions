#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    int max_diff = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < b[i]) {
            cout << "NO\n";
            return;
        }
        max_diff = max(max_diff, a[i] - b[i]);
    }

    bool possible = true;
    for (int i = 0; i < n; ++i) {
        if (b[i] > 0 && (a[i] - b[i] != max_diff)) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}