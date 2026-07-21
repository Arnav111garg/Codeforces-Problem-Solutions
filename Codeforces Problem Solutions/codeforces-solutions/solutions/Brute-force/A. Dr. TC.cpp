#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int c1 = 0, c0 = 0;
    for (char ch : s) {
        if (ch == '1') c1++;
        else c0++;
    }
    
    int ans = c1 * (n - 1) + c0 * 1;
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