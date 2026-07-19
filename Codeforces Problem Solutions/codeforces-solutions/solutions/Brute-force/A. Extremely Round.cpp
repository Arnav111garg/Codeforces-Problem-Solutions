#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int ans = (s.length() - 1) * 9;
    
    ans += (s[0] - '0');
    
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