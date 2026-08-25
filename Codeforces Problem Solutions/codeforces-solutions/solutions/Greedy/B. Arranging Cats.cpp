#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    string s, f;
    cin >> s >> f;

    int c10 = 0; // '1' in s, '0' in f
    int c01 = 0; // '0' in s, '1' in f

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1' && f[i] == '0') {
            c10++;
        } else if (s[i] == '0' && f[i] == '1') {
            c01++;
        }
    }

    cout << max(c10, c01) << "\n";
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