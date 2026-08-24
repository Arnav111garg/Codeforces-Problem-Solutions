#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bool ok = true;

    for (int i = 0; i < n; i += 2) {
        if (a[i] % 2 != a[0] % 2) {
            ok = false;
        }
    }

    for (int i = 1; i < n; i += 2) {
        if (a[i] % 2 != a[1] % 2) {
            ok = false;
        }
    }

    if (ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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