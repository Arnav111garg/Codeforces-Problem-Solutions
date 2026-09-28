#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long product = 1;
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        product *= val;
    }
    
    long long ans = (product + n - 1) * 2022LL;
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