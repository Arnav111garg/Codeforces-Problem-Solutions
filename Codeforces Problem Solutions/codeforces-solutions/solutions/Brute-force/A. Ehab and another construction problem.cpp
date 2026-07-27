#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    if (cin >> x) {
        if (x == 1) {
            cout << -1 << "\n";
        } else {
            cout << x << " " << x << "\n";
        }
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