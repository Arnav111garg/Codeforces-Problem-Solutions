#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (cin >> n) {
        int k = 1;
        while (true) {
            int tri = k * (k + 1) / 2;
            if (tri == n) {
                cout << "YES\n";
                return;
            }
            if (tri > n) {
                cout << "NO\n";
                return;
            }
            k++;
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