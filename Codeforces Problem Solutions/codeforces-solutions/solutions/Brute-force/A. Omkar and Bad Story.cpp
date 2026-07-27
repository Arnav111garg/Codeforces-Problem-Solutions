#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    bool has_negative = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            has_negative = true;
        }
    }

    if (has_negative) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        cout << 101 << "\n";
        for (int i = 0; i <= 100; i++) {
            cout << i << (i == 100 ? "" : " ");
        }
        cout << "\n";
    }
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