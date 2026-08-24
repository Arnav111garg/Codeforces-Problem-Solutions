#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    if (!(cin >> a >> b)) return;

    if (a == 0) {
        cout << 1 << "\n";
    } else {
        cout << a + 2 * b + 1 << "\n";
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