#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    if (!(cin >> a >> b)) return;

    while (a > 0 && b > 0) {
        if (a >= 2 * b) {
            a %= (2 * b);
        } else if (b >= 2 * a) {
            b %= (2 * a);
        } else {
            break;
        }
    }

    cout << a << " " << b << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}