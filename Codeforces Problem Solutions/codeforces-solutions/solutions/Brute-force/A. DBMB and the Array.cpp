#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, x;
    cin >> n >> s >> x;
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
    }
    
    if (sum <= s && (s - sum) % x == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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