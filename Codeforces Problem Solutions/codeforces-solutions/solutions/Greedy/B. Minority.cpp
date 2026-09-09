#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int c0 = 0, c1 = 0;
    for (char c : s) {
        if (c == '0') c0++;
        else c1++;
    }

    if (c0 != c1) {
        cout << min(c0, c1) << "\n";
    } else {
        cout << c0 - 1 << "\n";
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