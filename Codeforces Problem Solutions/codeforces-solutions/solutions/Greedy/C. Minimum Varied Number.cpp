#include <bits/stdc++.h>
using namespace std;

void solve() {
    int s;
    cin >> s;

    string ans = "";
    for (int d = 9; d >= 1; --d) {
        if (s >= d) {
            ans += to_string(d);
            s -= d;
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
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