#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, m;
    cin >> a >> b >> m;

    long long ans = (m / a + 1) + (m / b + 1);
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