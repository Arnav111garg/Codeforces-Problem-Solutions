#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    long long max_val = 0;
    for (int i = 0; i < n; ++i) {
        long long val;
        cin >> val;
        max_val = max(max_val, val);
    }

    cout << n * max_val << "\n";
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