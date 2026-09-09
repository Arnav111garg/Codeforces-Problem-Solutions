#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int min_val = INT_MAX;
    bool has_even = false, has_odd = false;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        min_val = min(min_val, a[i]);
        if (a[i] % 2 == 0) has_even = true;
        else has_odd = true;
    }

    if (!has_even || !has_odd || min_val % 2 != 0) {
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