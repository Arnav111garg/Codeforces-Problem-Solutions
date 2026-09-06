#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for (int i = 0; i < n; ++i) {
        int h;
        cin >> h;
        min_val = min(min_val, h);
        max_val = max(max_val, h);
    }

    cout << max_val - min_val + 1 << "\n";
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