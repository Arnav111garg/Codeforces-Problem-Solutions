#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    if (!(cin >> a >> b >> c)) return;

    for (int x = 0; a * x <= c; ++x) {
        int rem = c - a * x;
        if (rem % b == 0) {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
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