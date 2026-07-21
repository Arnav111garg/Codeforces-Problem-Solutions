#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
    string ans = "";
    for (int i = 0; i < n / 2; i++) {
        if (i % 2 == 0) {
            ans += "AA";
        } else {
            ans += "BB";
        }
    }
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