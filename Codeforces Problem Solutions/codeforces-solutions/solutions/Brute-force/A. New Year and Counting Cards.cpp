#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    if (cin >> s) {
        int ans = 0;
        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == '1' || c == '3' || c == '5' || c == '7' || c == '9') {
                ans++;
            }
        }
        cout << ans << "\n";
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