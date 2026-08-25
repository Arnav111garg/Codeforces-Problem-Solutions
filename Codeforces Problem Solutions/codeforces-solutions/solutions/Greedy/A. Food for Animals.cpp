#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c, x, y;
    if (!(cin >> a >> b >> c >> x >> y)) return;

    long long needed_for_dogs = max(0LL, x - a);
    long long needed_for_cats = max(0LL, y - b);

    if (needed_for_dogs + needed_for_cats <= c) {
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