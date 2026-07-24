#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    unordered_set<string> seen;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (seen.count(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
            seen.insert(s);
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