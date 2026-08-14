#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int ans_k = 0;
    for (int i = 1; i <= n; i++) {
        int p_i;
        cin >> p_i;
        int diff = abs(p_i - i);
        ans_k = std::__gcd(ans_k, diff);
    }

    cout << ans_k << "\n";
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