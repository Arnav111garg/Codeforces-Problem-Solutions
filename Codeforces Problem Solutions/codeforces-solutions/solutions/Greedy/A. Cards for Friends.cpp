#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long w, h, n;
    if (!(cin >> w >> h >> n)) return;

    long long sheets = 1;

    while (w % 2 == 0) {
        w /= 2;
        sheets *= 2;
    }
    while (h % 2 == 0) {
        h /= 2;
        sheets *= 2;
    }

    if (sheets >= n) {
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