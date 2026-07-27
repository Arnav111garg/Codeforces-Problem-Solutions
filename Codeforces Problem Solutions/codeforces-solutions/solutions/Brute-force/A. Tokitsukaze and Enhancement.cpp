#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    if (cin >> x) {
        int r = x % 4;
        if (r == 1) {
            cout << "0 A\n";
        } else if (r == 2) {
            cout << "1 B\n";
        } else if (r == 3) {
            cout << "2 A\n";
        } else { // r == 0
            cout << "1 A\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}