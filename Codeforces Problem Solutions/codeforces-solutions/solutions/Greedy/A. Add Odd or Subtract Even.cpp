#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    if (!(cin >> a >> b)) return;

    if (a == b) {
        cout << 0 << "\n";
    } else if (a < b) {
        if ((b - a) % 2 != 0) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    } else { // a > b
        if ((a - b) % 2 == 0) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
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